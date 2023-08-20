#include <iostream>
using namespace std;



int main(void) {
	int N;
	cin >> N;

	int** arr = new int* [N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = new int[3];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j == 0)
			{
				if (arr[i - 1][1] >= arr[i - 1][2])
					arr[i][j] += arr[i - 1][2];
				else
					arr[i][j] += arr[i - 1][1];
			}
			else if (j == 1)
			{
				if (arr[i - 1][0] >= arr[i - 1][2])
					arr[i][j] += arr[i - 1][2];
				else
					arr[i][j] += arr[i - 1][0];
			}
			else
			{
				if (arr[i - 1][0] >= arr[i - 1][1])
					arr[i][j] += arr[i - 1][1];
				else
					arr[i][j] += arr[i - 1][0];
			}
		}
	}

	if (arr[N - 1][0] >= arr[N - 1][2] && arr[N - 1][1] >= arr[N - 1][2])
		cout << arr[N - 1][2];
	else if (arr[N - 1][0] >= arr[N - 1][1])
		cout << arr[N - 1][1];
	else
		cout << arr[N - 1][0];

	for (int i = 0; i < N; i++)
		delete[] arr[i];
	delete[] arr;


	return 0;
}