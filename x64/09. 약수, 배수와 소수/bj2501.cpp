#include <iostream>
using namespace std;

int main(void) {
	int N; int K;
	cin >> N >> K;
	int count = 0;
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			count++;
			if (count == K)
				cout << i;
		}

		if (i == N && count < K)
			cout << 0;
	}



	return 0;
}