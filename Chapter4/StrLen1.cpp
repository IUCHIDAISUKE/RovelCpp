#include <iostream>
using namespace std;

size_t StrLen(char *str)
{
    size_t i;
    for (i = 0; str[i] != '\0'; i++)
    {
    }
    return i;
}

void ShowLength(char *str)
{
    cout << "The length of " << str << " is " << StrLen(str) << endl;
}

int main()
{
    ShowLength("Hello");
    ShowLength("");
}
