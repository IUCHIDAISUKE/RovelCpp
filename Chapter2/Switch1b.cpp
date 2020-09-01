#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int a, b, op, res;
        cout << "1st number > " << flush;
        cin >> a;

        cout << "2nd number > " << flush;
        cin >> b;

        cout << "1:add, 2:substract, 3:multiple, 4:divide > " << flush;
        cin >> op;

        if (op == 1)
        {
            res = a + b;
        }
        else if (op == 2)
        {
            res = a - b;
        }
        else if (op == 3)
        {
            res = a * b;
        }
        else if (op == 4)
        {
            res = a / b;
        }
        else
        {
            cout << "Not number" << endl;
        }

        cout << "answer is " << res << endl;
    }
    cout << "finish program" << endl;
}
