#include <iostream>
#include <cmath>
using namespace std;


int main(void)
{
	
	int M; int N;
	cin >> M >> N;
	while (M <= N)
	{
		if (M == 1)
		{
			M++;
		}

		bool sosu = true;

		for (int j = 2; j <= (int)(sqrt(M) + 1); j++)
		{

			if (M % j == 0 && M != j)
			{
				sosu = false;
				break;
			}
		}

		if (sosu == true)
		{
			cout << M << "\n";
		}
		M++;
	};


	return 0;
}

