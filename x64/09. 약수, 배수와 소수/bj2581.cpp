#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int M; int N;
	cin >> M;
	cin >> N;

	int sum = 0;
	int min = -1;

	for (int i = N; i >= M; i--)
	{
		bool sosu = true;
		if (i == 1)
			sosu = false;
		for (int j = 2; j < (int)(sqrt(i) + 1); j++)
		{
			if (i % j == 0 && i != j)
				sosu = false;
		}
		if (sosu == true)
		{
			sum += i;
			min = i;
		}
	}
	if (sum!=0)
		cout << sum << endl;
	cout << min;


	return 0;
}