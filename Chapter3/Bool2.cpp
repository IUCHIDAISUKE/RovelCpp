#include <iostream>
using namespace std;

bool IsDigit(char ch)
{
    return '0' <= ch && ch <= '9';
}

int main()
{

    while (true)
    {
        char ch;
        cout << "input character -> " << flush;
        cin >> ch;
        if (ch == 'Q' || ch == 'q')
        {
            break;
        }
        if (IsDigit(ch))
        {
            cout << "This is number" << endl;
        }
        else
        {
            cout << "This isn't number" << endl;
        }
    }
    cout << "end" << endl;
}
