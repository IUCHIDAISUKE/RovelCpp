#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        int a, b;
        cout << "Please input 1st number > " << flush;
        cin >> a;

        cout << "Please input 2nd number > " << flush;
        cin >> b;

        if (b == 0)
        {
            cout << "Not devide 0" << endl;
            break;
        }

        cout << a << " / " << b << " = " << a / b << " ... " << a % b << endl;
    }
    cout << "finish program" << endl;
}
