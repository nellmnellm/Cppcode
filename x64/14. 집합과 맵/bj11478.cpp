#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	set <string> good;
	for (int i = 1; i <= s.length(); i++)
	{
		for (int j = 0; j <= s.length() - i; j++)
		{
			good.insert(s.substr(j,i));
		}
	}

	cout << good.size();

	return 0;
}