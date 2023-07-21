#include <iostream>
using namespace std;

int main(void)
{
	int a; int b; int c; int d; int e; int f;
	cin >> a >> b >> c >> d >> e >> f;
	if (b != 0)
	{
		int x = (b * f - e * c) / (d * b - a * e);
		int y = (c - a * x) / b;
		cout << x << " " << y;
	}
	else
	{
		int x = c / a;
		int y = (a * f - c * d) / (a * e);
		cout << x << " " << y;
	}

	return 0;
}