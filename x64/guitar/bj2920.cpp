#include <iostream>
using namespace std;

int main(void) {
	char* s = new char [10];
	for (int i = 0; i < 8; i++)
		cin >> s[i];


	char nowchar;
	for (int i = 0; i < 8; i++) {
		if (i == 0)
			nowchar = s[i];
		else
		{
			if (s[i] == nowchar + 1)
			{
				if (i != 7)
				{
					nowchar = s[i - 1] + 1;
					continue;

				}

				else
				{
					cout << "ascending";
					break;
				}
			}

			else if (s[i] == nowchar - 1)
			{
				if (i != 7)
				{
					nowchar = s[i - 1] - 1;
					continue;

				}

				else
				{
					cout << "descending";
					break;
				}
			}

			else
			{
				cout << "mixed";
				break;
			}
		}
 
	}
		






	return 0;
}