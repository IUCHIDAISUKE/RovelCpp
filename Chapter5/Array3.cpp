#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
     const int KUKU_SIZE = 9;
     int kuku[KUKU_SIZE][KUKU_SIZE];

     for (int i = 0; i < KUKU_SIZE; i++)
     {
          for (int j = 0; j < KUKU_SIZE; j++)
          {
               kuku[i][j] = (i + 1) * (j + 1);
          }
     }

     cout << "    1  2  3  4  5  6  7  8  9" << endl;
     for (int i = 0; i < KUKU_SIZE; i++)
     {
          printf(" %d ", i + 1);
          for (int j = 0; j < KUKU_SIZE; j++)
          {
               printf("%2d ", kuku[i][j]);
          }
          cout << endl;
     }
}
