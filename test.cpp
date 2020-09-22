#include <bits/stdc++.h>
using namespace std;

void chage(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}
int main()
{
	int a = 4, b = 2;
	chage(&a, &b);
	cout << a << ' ' << b << endl;
	cout << endl;
}
