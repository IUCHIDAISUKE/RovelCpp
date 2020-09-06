#include <iostream>
using namespace std;

void WesternToShowa(int &x)
{
    if (1926 <= x && x <= 1989)
    {
        x -= 1925;
    }
    else
    {
        x = 0;
    }
}

void Shouwa()
{
    int year;

    cout << "Input years > " << flush;
    cin >> year;

    WesternToShowa(year);
    if (year != 0)
    {
        cout << "This is " << year << endl;
    }
    else
    {
        cout << "Not Shouwa" << endl;
    }
}

int main()
{
    Shouwa();
    Shouwa();
}
