#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int a, b;
        cout << "Please input 1st number > " << flush;
        cin >> a;

        cout << "Please input 2nd number > " << flush;
        cin >> b;

        if (b == 01)
        {
            cout << "Not devide 0" << endl;
            continue;
        }

        cout << a << " / " << b << " = " << a / b << " ... " << a % b << endl;
    }
    cout << "finish program" << endl;
}
