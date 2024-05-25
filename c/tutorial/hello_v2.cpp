#include "all.h"

int main()
{
    std::cout << "Hello, world!\n" ;
}

// $ g++ -include all.h -o hello_v2 hello_v2.cpp
// このようにしておけば、all.hをincludeしなくてもOK

// $ time g++ -include all.h -o hello_v2 hello_v2.cpp
// これをすると時間も測ることができる
