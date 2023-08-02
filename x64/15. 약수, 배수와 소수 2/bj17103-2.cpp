#include <iostream>
#include <cmath>

using namespace std;

bool truesosu(int i) {
	bool sosu = true;

	for (int j = 2; j <= (int)(sqrt(i) + 1); j++)
	{

		if (i % j == 0 && i != j)
		{
			sosu = false;
			break;
		}
	}

	if (sosu == true)
		return true;
	else
		return false;
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;
		int part = 0;
		if (N == 4)
		{
			part++;
		}
		for (int j = 3; j <= N / 2; j += 2)
		{
			if (truesosu(j) && truesosu(N - j))
				part++;
		}
		cout << part << "\n"; 
	}
	return 0;
}