#include <iostream>
using namespace std;

int main(void) {


	int N;
	cin >> N;
	int arr[500][500] = { 0, };

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			if (j != i && j != 0)
			{
				if (arr[i - 1][j - 1] >= arr[i - 1][j])
					arr[i][j] += arr[i - 1][j - 1];
				else
					arr[i][j] += arr[i - 1][j];
			}
			else if (j == 0)
			{
				arr[i][j] += arr[i - 1][0];
			}

			else
			{
				arr[i][j] += arr[i - 1][j - 1];
			}
		}
	}
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		if (max < arr[N - 1][i])
			max = arr[N - 1][i];

	}

	cout << max;


	return 0;
}