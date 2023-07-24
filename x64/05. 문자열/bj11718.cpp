#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	while (!cin.eof())
	{
		string d;
		getline(cin, d);
		cout << d << endl;
	}
	return 0;
}