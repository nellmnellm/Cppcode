#include <iostream>
using namespace std;

int main(void) {
	int N; int M;
	cin >> N >> M;
	if (N < M)
	{
		int tmp = M;
		M = N;
		N = tmp;
	}

	int mul = N * M;

	if (N % M == 0)
		cout << M << '\n' << N;
	else
	{
		while (true)
		{
			N = N % M;
			if (M % N == 0)
			{
				cout << N << '\n' << mul / N;
				break;
			}
			else 
			{
				
				int whiletmp = M;
				M = N;
				N = whiletmp;
				
			}
				
		}


	}



	return 0;
}