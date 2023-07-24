#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{

	int n = 1;
	int X;
	cin >> X;
	while (X > (n - 1) * n / 2)
	{
		n++;
	};

	int kan = X - ((n - 1) * (n - 2) / 2);
	int a = kan;
	int b = n - kan;
	if (n % 2 == 0)
		cout << b << "/" << a;
	else
		cout << a << "/" << b;
	return 0;
}