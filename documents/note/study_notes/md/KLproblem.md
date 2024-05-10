---
layout: default
title: KL problemのノート
---

# KL problemのノート

KL problemの簡単にまとめたい。

この話題自体がそんなに自分の研究に関係あるわけではないが、どうやら手法が使えそうということなので、軽く読んでみた。そのメモ。

本当はオリジナルを読むべきだが、調べてたら山田さんの文章[[1](#YYJHEP)]があったので、そこのレビューの部分を読んだ。


## KL problemとは

KKLT模型では
$$
    \begin{cases}
        W
        =
        w_{0}+Ae^{-aT}
        \\
        K
        =
        -3\ln(T+\bar{T})
    \end{cases}
$$
と超ポテンシャルとKählerポテンシャルが与えられ、これらからなるスカラーポテンシャルは
$$
    V
    =
    e^{K}(K^{I\bar{J}}D_{I}WD_{\bar{J}}\bar{W}-3|W|^2)
$$
である。

KKLT模型のVEVは

- SUSYを保つ
- $V_{\mathrm{min}}<0$

という性質がある。実際に実験との整合性云々から、SUSYを破る項を入れて$V_{\mathrm{min}}=\mathcal{O}(120)$くらいまでupliftしなければならない。

そう考えて、インフラトン場$\phi$を導入して、それを込みのポテンシャルを考えると$V_{\mathrm{min}}$の値が大きくなりすぎて、障壁をこえて$\sigma\equiv\mathrm{Re}T$が$\mathrm{Re}T\rightarrow\infty$で$V_{\mathrm{min}}\rightarrow0$とランウェイしてしまう。これを回避するためにはハッブルパラメターが$H<m_{3/2}$を満たしていなければならず、これが**KL problem**らしい[^1]。

## KalloshとLindeの仕事

KL problemに対して、KalloshとLindeは解決法を見出したという[[2](#KalloshLinde2004)]。それは次のような超ポテンシャル
$$
    \begin{gather*}
        W_{\mathrm{KL}}
        =
        w_{0}
        +
        Ae^{-aT}
        -
        Be^{-bT}
        \\
        w_{0}
        \equiv
        B\left(\frac{aA}{bB}\right)^{b/b-a}
        +
        A\left(\frac{aA}{bB}\right)^{a/b-a}
    \end{gather*}
$$
を考えることにある。この超ポテンシャルを考えてもやはり最小となるのはKKLTと同じで$D_{T}W=0$でSUSYを破らないが、$w_{0}$の値を調整しているおかげで、$W=0$となり、さらにMinkowski vacuumを実現している。

計算したMathematicaのコードは[ここ](notebook/kahler_meson_polonyi.nb)。値は[[2](#KalloshLinde2004)]を参考にしている。


[^1]: ハッブル定数の問題については、良く分からない。ゲージーノmassよりも小さいのは良くないのだろうか。


# 参考文献

[1] <a id="Yamada2013"></a>Y. Yamada, [JHEP 07 (2013) 039](https://doi.org/10.1007/JHEP07%282013%29039), [arXiv:1211.1455 [hep-ph]](https://doi.org/10.48550/arXiv.1211.1455).

[2] <a id="KalloshLinde2004"></a>R. Kallosh, A. Linde, [JHEP 12 (2004) 004](https://doi.org/10.1088/1126-6708/2004/12/004), [hep-th/0411011 [hep-th]](https://arxiv.org/abs/hep-th/0411011).
