#include <iostream>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (i == 0)
		{
			if (s[i] == '0')
			{
				cout << '0';
				return 0;
			}
			else if (s[i] == '1')
				cout << '1';
			else if (s[i] == '2')
				cout << "10";
			else if (s[i] == '3')
				cout << "11";
			else if (s[i] == '4')
				cout << "100";
			else if (s[i] == '5')
				cout << "101";
			else if (s[i] == '6')
				cout << "110";
			else if (s[i] == '7')
				cout << "111";
		}
		else
		{
			if (s[i] == '0')
				cout << "000";
			else if (s[i] == '1')
				cout << "001";
			else if (s[i] == '2')
				cout << "010";
			else if (s[i] == '3')
				cout << "011";
			else if (s[i] == '4')
				cout << "100";
			else if (s[i] == '5')
				cout << "101";
			else if (s[i] == '6')
				cout << "110";
			else if (s[i] == '7')
				cout << "111";
		}
	}




	return 0;
}