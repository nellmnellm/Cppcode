#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int x; int y;
		cin >> x >> y;
		int leng = y - x;
		
		int sqr = (int)sqrt(leng);
		int hang = 2 * sqr;
		if ((double)(sqr * sqr) == sqrt(leng) * sqrt(leng))
			hang--;
		else if (sqr * (sqr + 1) < leng)
			hang++;
		

		cout << hang << "\n";
	}
	return 0;
}


	  /*1  -- 
		1 1
		1 1 1
		1 2 1
		1 2 1 1
		1 2 2 1
		1 2 2 1 1
		1 2 2 2 1
		1 2 3 2 1  --  sqr = 3
		1 2 3 2 1 1
			...

		1 2 3 3 2 1
			...

		1 2 3 4 3 2 1  -- sqr = 4
	    1 2 3 4 3 2 1 1 -- squr -4 지만 5 소속 */