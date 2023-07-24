#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string S;
	cin >> S;
	int Arr[26];
	for (int i = 0; i < 26; i++)
	{
		int index;
		index = S.find((char)i + 97);
		if (index == string::npos)
			cout << -1 << " ";
		else
			cout << index << " ";
	}
	return 0;
}