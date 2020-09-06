#include <iostream>
using namespace std;

int Abs(int a)
{
    return ((a < 0) ? -a : a);
}

double Abs(double a)
{
    return ((a < 0) ? -a : a);
}

int Input(int &i, double &d)
{
    cout << "input integer -> " << flush;
    cin >> i;
    if (i == 0)
    {
        return (0);
    }
    cout << "input floating point -> " << flush;
    cin >> d;
    if (d == 0)
    {
        return (0);
    }
    return (1);
}

void ShowAbs(int i, double d)
{
    cout << "The absolute value of " << i << " is " << Abs(i) << endl
         << "The absolute value of " << d << " is " << Abs(d) << endl;
}

int main()
{
    int i;
    double d;

    while (Input(i, d) != 0)
    {
        ShowAbs(i, d);
    }
}
