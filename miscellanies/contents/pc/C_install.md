# VScode上でのC/C++ガイド

C/C++を使う環境を作りましょう。Ubuntu上でやります。

## インストールから

ターミナルで`sudo apt install build-essential`をするだけ。`gcc --version`や`g++ --version`でバージョンを確認できる。VScode自体にもC/C++関連の拡張機能を入れておく。

## Hello World!

まずはCから。以下の内容の`hello.c`を作る。

```
#include <stdio.h>

int main(void)
{
    printf("Hello World!\n");

    return 0;
}
```

ターミナルで
```
$ gcc -o hello hello.c
$ ./hello
Hello World!
```
と表示されるはず。VScodeに[Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)が入っていれば、`Ctrl+Alt+N`でうまくいくはず。

次は、C++です。以下の内容を`hello.cpp`に保存しましょう。

```
#include <iostream>

int main()
{
    std::cout << "Hello World!" << std::endl;

    return 0;
}
```

Cのときと同様、ターミナルで
```
$ g++ -o hello hello.cpp
$ ./hello
Hello World!
```
となっていればOKです。

## #includeでエラーが出ているとき

私だけかは分かりませんが、VScodeの拡張機能がデフォルトだと

> #include errors detected. Please update your includePath. Squiggles are disabled for this translation unit (/home/imiya/git/documents/c/tutorial/hello.c).

というエラーを吐いてきます。そのために、C/C++の拡張機能の設定を開いてコンパイラのパスを教えてあげましょう。パス自体はターミナルで`which gcc`とすると分かります。

## 参考

1. [UbuntuでC, C++の開発環境をインストールしてHelloWorldしよう！](https://qiita.com/nsd24/items/805d0b53c67a1043e819)
2. [「includePathを更新してください」を解決した時の話](https://qiita.com/__________________/items/a0c243d3b681c9dc89db)



<!-- ------------------------------------------------------------- -->
## メモ

以下は自分の備忘録です。雑に書き足していきます。

## matplotlibcpp.h

リンクは[ここ](https://github.com/lava/matplotlib-cpp)。ここから`matplotlibcpp.h`をダウンロードして、それをcppファイルの場所と同じ階層のディレクトリにおいて、`#include "matplotlibcpp.h"`とインクルードすればOK。

ただし、そのままだとすぐには使えなさそうなので、いくつか設定する。

### Python.hを見つける

~~まず、実行しようと思うと`Python.h`が見つからないといわれる。これは`sudo apt install python3.x-dev`とすれば解決する。`x`のところには、現在のバージョンを入れること。バージョンは`python3 --version`を実行すればよい。インストールが終わったら、`python3 -m sysconfig | grep INCLUDEPY`として、ディレクトリを見つける。自分の場合は`/usr/include/python3.10`にあるそうなので、Code Runnerのオプションに`-I /usr/include/python3.10`を追加する。これで通るはずです。~~

[あとの節に書いてある手段](#まだerror-ld-returned-1-exit-statusのエラーが)がよさそうです。

### /usr/includeに突っ込む

ところで、/usr/includeにヘッダーファイルがありそうなので、`sudo cp ***/matplotlibcpp.h /usr/include`でコピーしてしまいましょう。これで毎回`matplotlibcpp.h`をコピーする必要がなくなります。

### arrayobject.hを見つける

~~すると今度は`numpy/arrayobject.h`と言われてしまう。まずは、Python3でにnumpyを入れましょう。`pip3 install numpy`でいけます。(pip3のインストールも事前に必要ですが)~~

~~もう一度、`pip3 install numpy`とすると、インストールされた場所が分かるのでまずはそこに行きましょう。(正直ほかの環境でも同じかどうか、自身はありませんが、)`~/numpy/_core/include`というディレクトリがあって、そこの中にさらにnumpyというディレクトリがあるはずです。(includeのディレクトリを検索するのが実践的には良さそう？) あとはそれを`sudo cp -r`で/usr/includeにコピーしてしまいましょう[^1]。~~

[^1]: `-r`はディレクトリをコピーするオプションです。

これも[あとの節に書いてある手段](#まだerror-ld-returned-1-exit-statusのエラーが)で解決しそうです。

### #includeのエラーについて

#includeのエラーのところをクリックすると、"Edit "includePath" setting"という項目があるので、それを選びましょう。そうすると`*/.vscode/c_cpp_properties.json`が生成されるはずですので、以下のように"includePath"のところに`/usr/include/**`を追加してあげてください。

```
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**",
                "/usr/include/**"
            ],
            "defines": [],
            "compilerPath": "/usr/bin/g++"
        }
    ],
    "version": 4
}
```

### まだ"error: ld returned 1 exit status"のエラーが

どうやら、ごり押しでいろいろと解決できそうです。まずは`sudo apt install libpython3-all-dev python3-matplotlib python3-numpy`で必要そうなのをすべてインストールしましょう。あとは`-L /usr/lib/python3.10`を追加すれだけで読み込めそうです。つまり、
```
g++ -I /usr/include/python3.10 -L /usr/lib/python3.10 -lpython3.10
```
といった感じにすれば、`matplotlibcpp.h`は回るはずです。うまくいけば、次の`heart.cpp`が動くはずです。

```
#include <iostream>
#include <cmath>
#include <matplotlibcpp.h>

using namespace std;
namespace plt = matplotlibcpp;

int main()
{
    // Prepare data.
    int n = 5000; // number of data points
    vector<double> x(n),y(n);
    for(int i=0; i<n; ++i) {
        double t = 2*M_PI*i/n;
        x.at(i) = 16*sin(t)*sin(t)*sin(t);
        y.at(i) = 13*cos(t) - 5*cos(2*t) - 2*cos(3*t) - cos(4*t);
    }

    // plot() takes an arbitrary number of (x,y,format)-triples.
    // x must be iterable (that is, anything providing begin(x) and end(x)),
    // y must either be callable (providing operator() const) or iterable.
    plt::plot(x, y, "r-", x, [](double d) { return 12.5+abs(sin(d)); }, "k-");


    // show plots
    plt::show();
}
```

![heart.cppの実行結果](tutorial/heart.png)

### 参考

1. [Ubuntu(WSL)でPython.hが見つからない問題](https://zenn.dev/bluepost/articles/a824b2905df36f)
2. [Cython: "fatal error: numpy/arrayobject.h: No such file or directory"](https://stackoverflow.com/questions/14657375)
3. [[python3] すぐに使える numpy の使い方まとめ](https://qiita.com/saira/items/000bb3f171a516d68013)
4. [VScodeのinclude pathの設定をちゃんとする](https://qiita.com/sage-git/items/ffe463c0de05344d721b)
5. [matplotlib-cppでエラーにハマった話。error: ld returned 1 exit status](https://qiita.com/hibiki-kato/items/4c04fdcc9c14136869b3)
