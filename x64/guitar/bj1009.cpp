#include <iostream>

using namespace std;

int main(void)
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int a; int b;
		cin >> a >> b;
		a %= 10; b %= 4;
		if (b == 0)
			a = a * a * a * a;
		else if (b == 1)
			a = a;
		else if (b == 2)
			a = a * a;
		else if (b == 3)
			a = a * a * a;
		
		int c = a % 10;
		if (c != 0)
			cout << c << '\n';
		else
			cout << 10 << '\n';
	
	}
	



	return 0;

}