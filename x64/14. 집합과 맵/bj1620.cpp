#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; int m;
	cin >> n >> m;
	map <string, int> poke;
	map <int, string> poke2;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		poke[s] = i + 1;
		poke2[i + 1] = s;
	}

	for (int i = 0; i < m; i++)
	{
		string s;
		cin >> s;
		if ((int)s[0] >= '0' && (int)s[0] <= '9')
		{
			int convert_num = 0;
			for (int i = 0; i < s.length(); i++)
			{
				if (s.length() == 1)
					convert_num += ((int)s[0] - (int)'0');
				else
					convert_num += ((int)s[i] - (int)'0') * ((int)pow(10, s.length() - i - 1));
			}
			cout << poke2[convert_num] << "\n";
		}
		else
			cout << poke[s] << "\n";
	}
	return 0;
}