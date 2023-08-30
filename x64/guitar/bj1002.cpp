#include <iostream>
using namespace std;


int main(void)
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if (x1 == x2 && y1 == y2 && r1 == r2)
		{
			cout << -1 << '\n';
			continue;
		}
		if (r1 < r2)
		{
			int tmp;
			tmp = r1;
			r1 = r2;
			r2 = tmp;
		}
		double guri = (double)(x1 - x2) * (x1 - x2) + (double)(y1 - y2) * (y1 - y2);
		double banzi = (double)(r1 + r2) * (r1 + r2);
		double donuts = (double)(r1 - r2) * (r1 - r2);
		if (guri == banzi || guri == donuts)
			cout << 1 << '\n';
		else if (guri > banzi || guri < donuts)
			cout << 0 << '\n';
		else
			cout << 2 << '\n';

	}
	




	return 0;
}