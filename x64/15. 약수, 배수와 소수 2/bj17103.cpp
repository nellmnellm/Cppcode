#include <iostream>
#include <array>
#include <algorithm>
#include <cmath>

using namespace std;



	
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	array <bool, 499999> arr = { false, };
	
	
	for (int i=3; i<=999999; i += 2)
	{
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
		{
			arr[((i - 1) / 2) - 1] = true;
		}
	}

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;
		int part = 0;

		if (N == 4)
			part += 2;
		for (int j=0; j<=N/2 - 3; j++)
		{
			if (arr[j] && arr[N / 2 - 3 - j])
			{
				if (j == N / 2 - 3 - j)
					part += 2;
				else
					part++;
			}
		}


		cout << part / 2 << "\n";
	}


	return 0;
}