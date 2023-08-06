#include <iostream>
#include <string>
using namespace std;


int recursion(const string s, int l, int r) {
	if (l >= r)
	{
		return 1;
	}

	else if (s[l] != s[r])
	{
		return 0;
	}
	
	else
	{
		return recursion(s, l + 1, r - 1);
	}
}


int isPalindrome(const string s) {
	return recursion(s, 0, s.length() - 1);
}

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
		cout << isPalindrome(s);

		int count = 1;
		int l = 0; int r = s.length() - 1;
		while (true)
		{
			if (l >= r || s[l] != s[r])
			{
				cout << ' ' << count << '\n';
				break;
			}

			else
			{
				count++;
				l++;
				r--;
			}
		}
	}

	return 0;
}