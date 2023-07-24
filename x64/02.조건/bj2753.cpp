#include <iostream>
using namespace std;

int main(void)
{
	int year;
	cin >> year;
	if (year % 4)
		cout << 0;
	else 
		if (year % 100)
			cout << 1;
		else
			if (year % 400)
				cout << 0;
			else
				cout << 1;

	return 0;
}

