#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		int good = 1;
		string S;
		cin >> S;
		int alp[26];
		for (int j = 0; j < 26; j++)
			alp[j] = 0;
		for (int j = 0; j < S.length(); j++)
		{
			alp[(char)(S[j] - 97)]++;
			if (alp[(char)(S[j] - 97)] >= 2)
			{
				if (S[j] == S[j - 1])
					continue;
				else
				{
					good--;
					break;
				}
			}
		}
		if (good)
			count++;
	}
	cout << count;
	return 0;
}