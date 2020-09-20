#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
void Func2();

int main()
{
    int a = 20, b = 22;
    printf("Func1 -> %d\n", add(a, b));
    Func2();
}
