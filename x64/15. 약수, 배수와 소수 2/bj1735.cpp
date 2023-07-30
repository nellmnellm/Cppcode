#include <iostream>
using namespace std;

int main(void)
{

		int a; int b;
		int c; int d;
		cin >> a >> b >> c >> d;
		
		int baby = a * d + c * b;
		const int baby2 = baby;
		int mul = b * d;
		const int mul2 = mul;
		while (true)
		{
			if (baby > mul)
			{
				baby = baby % mul;
				if (baby == 0)
					break;
			}
			else
			{
				mul = mul % baby;
				if (mul == 0)
					break;
			}
		};

		int nanu;
		if (mul == 0)
			nanu = baby;
		else if (baby == 0)
			nanu = mul;

		cout << baby2 / nanu << " "<< mul2 / nanu;
	
	return 0;
}