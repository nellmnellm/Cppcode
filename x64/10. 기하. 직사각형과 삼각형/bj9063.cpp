#include <iostream>
using namespace std;

int main(void)
{
	int maxx = -10000;
	int minx = 10000;
	int maxy = -10000;
	int miny = 10000;

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int x; int y;
		cin >> x >> y;
		if (maxx <= x)
			maxx = x;
		if (minx >= x)
			minx = x;

		if (maxy <= y)
			maxy = y;
		if (miny >= y)
			miny = y;

	}

	cout << (maxx - minx) * (maxy - miny);


	return 0;
}