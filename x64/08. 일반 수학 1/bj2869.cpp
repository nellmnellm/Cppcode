#include <iostream>
using namespace std;

int main(void)
{
	int a; int b; int v;
	cin >> a >> b >> v;

	int day = 1;
	int height = a;
	if (height < v)
	{
		day += (v - height) / (a - b);
		if ((v - height) % (a - b) != 0)
			day++;
	};
	cout << day;

	return 0;
}