#include <iostream>
using namespace std;

int main()
{
    int a;
    int *p = &a;
    a = 0;
    cout << "*p   : " << *p << endl
         << " a   : " << a << endl;

    *p = 10;
    cout << "*p   : " << *p << endl
         << " a   : " << a << endl;
}
