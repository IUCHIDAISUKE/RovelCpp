#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void ShowAddres(char *pointer)
{
     cout << " pointer    : " << (size_t)pointer << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << "&pointer[" << i << "] : " << (size_t)&pointer[i] << endl;
     }
}

int main()
{
     char array[10];
     int a[10];

     cout << " array      : " << (size_t)array << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << "&array[" << i << "]   : " << (size_t)&array[i] << endl;
     }

     ShowAddres(array);
}
