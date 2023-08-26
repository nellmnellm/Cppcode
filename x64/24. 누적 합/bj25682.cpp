#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int** arr = new int* [2001];
	for (int i = 0; i < 2001; i++)
	{
		arr[i] = new int[2001];
	}
	int N; int M; int square;
	cin >> N >> M >> square;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			char borw;
			cin >> borw;
			if (i == 0 && j == 0)
			{
				if (borw == 'B')
					arr[i][j] = 1;
				else if (borw == 'W')
					arr[i][j] = 0;
			}
			else if (i == 0)
			{
				if ((borw == 'W' && (i + j) % 2 == 1) || (borw == 'B' && (i + j) % 2 == 0))
					arr[i][j] = arr[i][j - 1] + 1;
				else
					arr[i][j] = arr[i][j - 1];
			}
			else if (j == 0)
			{
				if ((borw == 'W' && (i + j) % 2 == 1) || (borw == 'B' && (i + j) % 2 == 0))
					arr[i][j] = arr[i - 1][j] + 1;
				else
					arr[i][j] = arr[i - 1][j];
			}
			else
			{
				if ((borw == 'W' && (i + j) % 2 == 1) || (borw == 'B' && (i + j) % 2 == 0))
					arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1] + 1;
				else
					arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
			}
		}
	}

	int max = 0;
	int min = square * square;

	for (int i = square - 1; i < N; i++)
	{
		for (int j = square - 1; j < M; j++)
		{
			if (i == square - 1 && j == square - 1)
			{
				if (max < arr[i][j])
					max = arr[i][j];
				if (min > arr[i][j])
					min = arr[i][j];
			}
			else if (i == square - 1 && j > square - 1)
			{
				if (max < arr[i][j] - arr[i][j - square])
					max = arr[i][j] - arr[i][j - square];
				if (min > arr[i][j] - arr[i][j - square])
					min = arr[i][j] - arr[i][j - square];
			}
			else if (i > square - 1 && j == square - 1)
			{
				if (max < arr[i][j] - arr[i - square][j])
					max = arr[i][j] - arr[i - square][j];
				if (min > arr[i][j] - arr[i - square][j])
					min = arr[i][j] - arr[i - square][j];
			}
			else
			{
				if (max < arr[i][j] - arr[i - square][j] - arr[i][j - square] + arr[i - square][j - square])
					max = arr[i][j] - arr[i - square][j] - arr[i][j - square] + arr[i - square][j - square];
				if (min > arr[i][j] - arr[i - square][j] - arr[i][j - square] + arr[i - square][j - square])
					min = arr[i][j] - arr[i - square][j] - arr[i][j - square] + arr[i - square][j - square];
			}
		}
	}


	if (square * square - max >= min)
		cout << min;
	else
		cout << square * square - max;


	return 0;
}