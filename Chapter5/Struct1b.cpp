#include <iostream>
using namespace std;
const int MAX_NAME = 16;

struct Student
{
    char name[MAX_NAME + 1];
    int scoreJapanese;
    int scoreMath;
    int scoreEnglish;
};

void Show(const Student *pointer)
{
    cout << "Name : " << pointer->name << endl
         << "Japanese : " << pointer->scoreJapanese
         << " , Math : " << pointer->scoreMath
         << " , English : " << pointer->scoreEnglish << endl;
}

int main()
{
    Student student[] = {
        {
            "Akai",
            73,
            98,
            86,
        },
        {
            "Kasai",
            64,
            45,
            40,
        },
        {
            "Yoshida",
            76,
            78,
            89,
        },
    };
    int size = sizeof student / sizeof *student;
    for (int i = 0; i < size; i++)
    {
        Show(&student[i]);
    }
}
