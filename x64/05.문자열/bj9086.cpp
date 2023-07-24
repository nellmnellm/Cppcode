#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{		

		string d;
		cin >> d;
		cout << d[0] << d[d.length() - 1] << endl;

	}

	return 0;
}