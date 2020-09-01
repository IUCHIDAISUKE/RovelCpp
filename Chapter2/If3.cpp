#include <iostream>
using namespace std;

int WesternToShowa(int western)
{
    if (1926 <= western && western <= 1989)
    {
        return western - 1925;
    }
    else
    {
        return 0;
    }
}

void Shouwa()
{
    int western;

    cout << "Input years > " << flush;
    cin >> western;

    int showa = WesternToShowa(western);
    if (!showa)
    {
        cout << "Not Shouwa" << endl;
    }
    else
    {
        cout << "This is " << showa << endl;
    }
}

int main()
{
    Shouwa();
}
