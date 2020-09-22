// #include "Test.h"
#include <iostream>
using namespace std;

class Test
{
    int a;

public:
    void Func();
    void Show();
};

void Test::Func()
{
    a = 0;
}

int main()
{
    Test test;
    test.Func();
    test.Show();
}
