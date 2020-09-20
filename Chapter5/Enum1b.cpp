#include <iostream>
using namespace std;

enum CompareResult
{
    CR_LESS_THAN = 0,
    CR_EQUAL_TO = 1,
    CR_GREATER_THAN = 2
};

CompareResult Compare(int a, int b)
{
    return a < b ? CR_LESS_THAN : a == b ? CR_EQUAL_TO : CR_GREATER_THAN;
}

bool Compare()
{
    const char *message[] = {
        "a < b",
        "a > b",
        "a = b"};

    int a, b;

    cout << "Input two number > " << flush;
    cin >> a >> b;
    if (a == -1)
    {
        return false;
    }

    cout << message[Compare(a, b)] << endl;
    return true;
}

int main()
{
    while (Compare())
    {
    }
}
