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

bool Input(int &i, double &d)
{
    cout << "input integer -> " << flush;
    cin >> i;
    if (i == 0)
    {
        return false;
    }
    cout << "input floating point -> " << flush;
    cin >> d;
    if (d == 0)
    {
        return false;
    }
    return true;
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

    while (Input(i, d))
    {
        ShowAbs(i, d);
    }
}
