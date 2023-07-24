#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
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
		poke[s] = i+1;
		poke2[i + 1] = s;
	}

	for (int i = 0; i < m; i++)
	{
		string s;
		cin >> s;
		if ((int)s[0] >= '0' && (int)s[0] <= '9')
		{
			if (s.length() == 1)
				cout << poke2[(int)s[0]-(int)'0'] << "\n";
			else if (s.length() == 2)
				cout << poke2[((int)s[0]-(int)'0') * 10 + ((int)s[1]-(int)'0')] << "\n";
		}
			
		else
			cout << poke[s];
		
	}


	return 0;
}