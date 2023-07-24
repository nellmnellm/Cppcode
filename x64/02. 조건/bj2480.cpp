#include <iostream>
using namespace std;

int main(void)
{
	int a; int b; int c;
	cin >> a >> b >> c;
	if (a == b)
	{
		if (a == c)
		{
			cout << 10000 + a * 1000;
		}
		else
			cout << 1000 + a * 100;
	}
	else if (a == c)
		cout << 1000 + a * 100;
	else if (b == c)
		cout << 1000 + b * 100;
	else
		cout << max(c,max(a, b)) * 100;

	return 0;
	

}
