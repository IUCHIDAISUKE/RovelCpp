#include "IntArray.h"
#include <iostream>
using namespace std;

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
IntArray::IntArray(const IntArray &other)
{
    m_array = new int[other.m_size];
    m_size = other.m_size;

    copy(other.m_array, other.m_array + m_size, m_array);
    cout << "Call copy constructer" << endl;
}

void IntArray::operator=(const IntArray &other)
{
    int *array = new int[other.m_size];

    delete[] m_array;
    m_array = array;
    m_size = other.m_size;
    copy(other.m_array, other.m_array + m_size, m_array);
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

int IntArray::Size()
{
    return m_size;
}
