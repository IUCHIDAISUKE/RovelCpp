#include <iostream>
#include <algorithm>
using namespace std;

void CheckAddress_Sub();
void CheckAddress_Sub2();

void CheckAddress()
{
    cout << "checking Address is stable" << endl;
    CheckAddress_Sub();
    CheckAddress_Sub2();
    CheckAddress_Sub();
}

void CheckAddress_Sub()
{
    static int a;
    int b;
    printf("&a = %p\n", (size_t)&a);
    printf("&b = %p\n", (size_t)&b);
}

void CheckAddress_Sub2()
{
    printf("in Sub2\n");
    CheckAddress_Sub();
}

void CheckInitOnce_Sub();
void CheckInitOnce()
{
    cout << endl
         << "checking initialize is once" << endl;
    CheckInitOnce_Sub();
    CheckInitOnce_Sub();
}

void CheckInitOnce_Sub()
{
    static int a = 3;
    int b = 3;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    a++;
    b++;
}

void CheckZeroInit_Sub();
void CheckZeroInit_Sub2();

void CheckZeroInit()
{
    cout << endl
         << "checking initialize number is 0" << endl;

    CheckZeroInit_Sub();
    CheckZeroInit_Sub2();
}

void CheckZeroInit_Sub()
{
    static int a, b, c, d;
    printf("%d, %d, %d, %d\n", a, b, c, d);
}

void CheckZeroInit_Sub2()
{
    int a, b, c, d;
    printf("%d, %d, %d, %d\n", a, b, c, d);
}

void CheckInvariant_Sub(int *&pa, int *&pb);
void CheckInvariant_Sub2();

void CheckInvariant()
{
    cout << endl
         << "checking value guaranteed" << endl;
    int *pa, *pb;
    CheckInvariant_Sub(pa, pb);
    CheckInvariant_Sub2();

    cout << "*pa = " << *pa << endl
         << "*pb = " << *pb << endl;
}

void CheckInvariant_Sub(int *&pa, int *&pb)
{
    static int a = 9;
    int b = 9;
    pa = &a;
    pb = &b;
}
void CheckInvariant_Sub2()
{
    int dummy[100];
    fill_n(dummy, 100, 0);
}

int main()
{
    CheckAddress();
    CheckInitOnce();
    CheckZeroInit();
    CheckInvariant();
}
