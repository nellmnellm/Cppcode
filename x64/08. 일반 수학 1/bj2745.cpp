#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	string s;
	int num;
	
	cin >> s >> num;

	int	sum = 0;
	int len = s.length();

	for (int i = 0; i < len; i++)
	{
		int cha = s[len - 1 - i];
		if (cha >= 48 && cha < 58)
			cha -= 48;
		else if (cha >= 65 && cha < 91)
			cha -= 55;
		

		sum += cha * (int)pow(num, i);
	}

	cout << sum;


	return 0;
}