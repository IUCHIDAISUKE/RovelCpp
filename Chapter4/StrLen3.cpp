#include <iostream>
using namespace std;

size_t StrLen(char *str)
{
    int i;
    for (i = 0; *(str + i) != '\0'; i++)
    {
        cout << str[i] << " = " << (str + i)[0] << endl;
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
