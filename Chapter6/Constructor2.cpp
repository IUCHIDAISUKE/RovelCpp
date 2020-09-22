#include <iostream>
using namespace std;
const int MAX_NAME = 16;

class Integer
{
public:
    int m_value;

    // Integer();
    Integer(int num = 0);
    void Show();
};

// Integer::Integer()
// {
//     m_value = 0;
// }
Integer::Integer(int num)
{
    m_value = num;
}

void Integer::Show()
{
    cout << m_value << endl;
}

int main()
{
    Integer a, b(100), c(42);
    Integer array[4] = {Integer(), Integer(4), Integer(2)};
    a.Show();
    b.Show();
    c.Show();
}
