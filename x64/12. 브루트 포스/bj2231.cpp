#include <iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int cons = 0;
	for (int i = N - 55; i < N; i++)
	{
		if (N == i + (i % 10) + (i % 100) / 10 + (i % 1000) / 100 + (i % 10000) / 1000 + (i % 100000) / 10000 + (i % 1000000) / 100000)
		{
			cons = i;
			break;
		}
	}

	cout << cons;

	return 0;
}