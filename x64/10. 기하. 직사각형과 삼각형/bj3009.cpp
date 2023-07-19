#include <iostream>

using namespace std;

int main(void)
{
	int a; int b; int c; int d; int e; int f;
	cin >> a >> b >> c >> d >> e >> f;

	if (a == c)
		cout << e << " ";
	else if (a == e)
		cout << c << " ";
	else
		cout << a << " ";

	if (b == d)
		cout << f;
	else if (b == f)
		cout << d;
	else
		cout << b;
	return 0;

}