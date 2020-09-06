#include <iostream>
using namespace std;

void showCode(char ch)
{
    cout << "[ " << ch << " ] s'number is "
         << (int)(unsigned char)ch << endl;
}

int main()
{
    showCode('O');
    showCode('a');
}
