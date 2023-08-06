#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

string kan(int N) {
	if (N == 0)
		return "-";
	else if (N > 0)
	{
		string s;
		s = kan(N - 1);
		for (int i = 0; i < pow(3,N-1); i++)
		{
			s.append(" ");
		}
		s.append(kan(N - 1));

		return s;
	}
}
int main(void) {
	
	
	while(!cin.eof())
	{
		if (!cin.eof())
			break;
		string s;
		getline(cin, s);
		if (s.length() == 0)
			return 0;
		int num;	
		if (s[1])
			num = (int)(s[0] - '0') * 10 + (int)(s[1] - '0');
		else
			num = (int)(s[0] - '0');

		cout << kan(num);

		
	}



	return 0;
}