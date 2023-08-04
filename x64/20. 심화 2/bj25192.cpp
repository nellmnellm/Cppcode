#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	set <string> username;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		if (s == "ENTER")
		{
			count += username.size();
			username.clear();
		}
		else
			username.insert(s);

	}
	count += username.size();
	cout << count;
	return 0;
}