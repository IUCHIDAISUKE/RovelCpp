#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

// const int ARRAY_SIZE = 100;

class IntArray
{
public:
    IntArray(int size);
    ~IntArray();
    int Get(int i);
    void Set(int i, int value);
    void Show();

private:
    int *m_array;
    int m_size;
    void CheckIndex(int i);
};

IntArray::IntArray(int size)
{
    m_array = new int[size];
    m_size = size;
    fill_n(m_array, m_size, 42);
    cout << "Call construct." << endl
         << "Size is " << m_size << endl;
}

IntArray::~IntArray()
{
    delete[] m_array;
    cout << "Call destructor." << endl
         << "Size was " << m_size << endl;
}

void IntArray::Show()
{
    for (int i = 0; i < m_size; i++)
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
    if (0 <= i && i < m_size)
    {
    }
    else
    {
        cout << "out of index" << endl
             << "value : " << i << endl;
        exit(EXIT_FAILURE);
    }
}

void Viss(int num)
{
    cout << "viss : No." << num << endl;
}

IntArray a(10);

int main()
{
    Viss(1);

    IntArray b(20);
    Viss(2);

    IntArray c(30);
    Viss(3);
    {
        IntArray d(40);
        Viss(4);
    }
    Viss(5);
}
