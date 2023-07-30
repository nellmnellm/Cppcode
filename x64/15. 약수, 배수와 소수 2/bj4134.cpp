#include <iostream>
#include <cmath>
using namespace std;


int main(void)
{
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		long long int K;
		cin >> K;

	
		while (true)
		{
			if (K == 0 || K == 1)
			{
				cout << 2 << "\n";
				break;
			}

			bool sosu = true;

			for (long long int j = 2; j <= (long long int)(sqrt(K) + 1); j++)
			{

				if (K % j == 0 && K != j)
				{
					sosu = false;
					break;
				}
			}

			if (sosu == true)
			{
				cout << K << "\n";
				break;
			}
			K++;
		}
		
	};
	


	return 0;
}



