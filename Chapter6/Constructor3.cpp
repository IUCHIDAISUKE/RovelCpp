#include <iostream>
#include <algorithm>
using namespace std;

const int ARRAY_SIZE = 100;

class IntArray
{
public:
    IntArray();
    int Get(int i);
    void Set(int i, int value);
    void Show();

private:
    int m_array[ARRAY_SIZE];
    void CheckIndex(int i);
};

IntArray::IntArray()
{
    fill_n(m_array, ARRAY_SIZE, 0);
}

void IntArray::Show()
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << m_array[i] << ' ';
    }
    cout << endl;
}

int IntArray::Get(int i)
{

    CheckIndex(i);
    return m_array[i];
}

void IntArray::Set(int i, int value)
{

    CheckIndex(i);
    m_array[i] = value;
}

void IntArray::CheckIndex(int i)
{
    if (0 <= i && i < ARRAY_SIZE)
    {
    }
    else
    {
        cout << "out of index" << endl
             << "value : " << i << endl;
        exit(EXIT_FAILURE);
    }
}

int main()
{
    IntArray a;
    a.Set(10, 42);
    a.Show();
}
