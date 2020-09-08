#include <iostream>
using namespace std;

size_t StrLen(char *str)
{
    char *p;
    for (p = str; *p != '\0'; p++)
    {
    }
    return p - str;
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
