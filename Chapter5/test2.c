#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

void Func2()
{
    int a = 12, b = 30;
    printf("Func2 -> %d\n", add(a, b));
}
