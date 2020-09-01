#include <iostream>
using namespace std;

void Divide()
{
    int a, b;

    cout << "Input first number > " << flush;
    cin >> a;
    cout << "Input second number > " << flush;
    cin >> b;

    if (b == 0)
    {
        cout << "Not divide 0" << endl;
    }
    else
    {
        cout << a << " / " << b << " = " << a / b << " ... " << a % b << endl;
    }
}

int main()
{
    Divide();
    Divide();
}
