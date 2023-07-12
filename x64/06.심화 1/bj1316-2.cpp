#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	char alp[26];
	for (int i = 0; i < 26; i++)
		alp[i] = 0;

	string daner;
	cin >> daner;
	int mangdaner = 0;


	for (int j = 0; j < 26; j++)
	{

		while (alp[j] >= 2)
		{
			int plus = 1;
			if (daner.find((char)j + 97) + plus == daner.length() - 1)
			{
				if (daner[daner.find((char)j + 97)] == daner[daner.find((char)j + 97) + plus])
					break;
				else
				{
					mangdaner = 1;
					break;
				}
			}

			else if (daner[daner.find((char)j + 97)] == daner[daner.find((char)j + 97) + plus])
			{
				plus++;
				alp[j]--;
			}
			else
			{
				mangdaner = 1;
				break;
			}
		}



		cout << mangdaner;
		return 0;
	}
}