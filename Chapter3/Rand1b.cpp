#include <iostream>
#include <cstdbool>
using namespace std;

int Dice()
{
    return (int)(rand() / (RAND_MAX + 1.0) * 6.0) + 1;
}

int main()
{
    for (int i = 0; i < 20; i++)
    {
        cout << Dice() + Dice() << ' ';
    }
    cout << endl;
}
