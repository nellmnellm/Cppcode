#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string S;
	int count = 1;
	getline(cin, S);
	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] == ' ')
			count++;
	}
	if (S[0] == ' ' && S[S.length() - 1] == ' ')
		count -= 2;
	else if (S[0] == ' ' || S[S.length() - 1] == ' ')
		count--;
	

	
	cout << count;

	return 0;
}