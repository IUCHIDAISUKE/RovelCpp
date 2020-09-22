#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray
{
public:
    IntArray(const IntArray &other);
    IntArray(int n);
    ~IntArray();
    void operator=(const IntArray &other);
    int Get(int i);
    void Set(int i, int value);
    void Show();
    int Size();

private:
    int *m_array;
    int m_size;
    void CheckIndex(int i);
};

#endif
