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
		int mul = a* b;
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
		int nanu;
		if (a == 0)
			nanu = b;
		else if (b == 0)
			nanu = a;

		cout << mul / nanu << "\n";
	}

	


	return 0;


}