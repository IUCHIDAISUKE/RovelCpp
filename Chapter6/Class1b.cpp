#include <iostream>
using namespace std;
const int MAX_NAME = 16;

class Student
{
public:
    char name[MAX_NAME + 1];
    int scoreJapanese;
    int scoreMath;
    int scoreEnglish;

    void Show();
};

void Student::Show()
{
    cout << "Name : " << name << endl
         << "Japanese : " << scoreJapanese
         << " , Math : " << scoreMath
         << " , English : " << scoreEnglish << endl;
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
        student[i].Show();
    }
}
