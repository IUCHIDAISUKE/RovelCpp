#include <iostream>
using namespace std;

void BirthMonth()
{
	int month;

	cout << "When is your birthday? > " << flush;
	cin >> month;

	if (1 <= month && month <= 12)
	{
		cout << "Ok, this is " << month << endl;
	}
	else
	{
		cout << "Hmm " << month << " is nothing" << endl;
	}
}

int main()
{
	BirthMonth();
	BirthMonth();
}
