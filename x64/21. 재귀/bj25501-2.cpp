#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		int l = 0;
		int r = s.length() - 1;
		int count = 1;
		while (true)
		{
			if (l >= r)
			{
				cout << 1 << " " << count << '\n';
				break;
			}
			else if (s[l] != s[r])
			{
				cout << 0 << ' ' << count << '\n';
				break;
			}
			else
			{
				l++;
				r--;
				count++;
			}
		}

	}

	return 0;
}