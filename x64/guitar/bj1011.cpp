#include <iostream>
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
		int length= y-x;
		int hang = 0;
		for (int j = 0; length > j * (j + 1); j++)
		{
			if (length > (j+1) * (j+1))
				hang += 2;
			else
				hang++;
		}
		cout << hang << "\n";
		/*1
		1 1
		1 1 1
		1 2 1
		1 2 1 1
		1 2 2 1
		1 2 2 1 1
		1 2 2 2 1
		1 2 3 2 1
		1 2 3 2 1 1
			...

		1 2 3 3 2 1 
			...

		1 2 3 4 3 2 1 */


	}

	

	return 0;
}