// #include "Test.h"
#include <iostream>
using namespace std;

class Test
{
    int a, b;

public:
    void Func();
    void Show();
};

void Test::Func()
{
    b = 0;
}

void Test::Show()
{
    cout << b << endl;
}
