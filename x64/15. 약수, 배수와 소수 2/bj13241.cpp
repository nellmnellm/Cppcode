#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long int a; long long int b;
	cin >> a >> b;
	long long int mul = a * b;
	while (true)
	{
		if (a > b)
		{
			a = a % b;
			if (a == 0)
				break;
		}
		else
		{
			b = b % a;
			if (b == 0)
				break;
		}
	}
	long long int nanu;
	if (a == 0)
		nanu = b;
	else if (b == 0)
		nanu = a;

	cout << mul / nanu;
	
	
	return 0;
}