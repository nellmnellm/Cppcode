#include <iostream>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int** arr = new int* [1024];
	for (int i = 0; i < 1024; i++)
	{
		arr[i] = new int[1024];
	}

	int N; int M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}

	}

	for (int i = 1; i < N; i++) {
		arr[0][i] += arr[0][i - 1];
		arr[i][0] += arr[i - 1][0];
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = 1; j < N; j++)
		{
			arr[i][j] += arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
		}
	}

	for (int i = 0; i < M; i++)
	{
		int fx; int fy; int sx; int sy;
		cin >> fx >> fy >> sx >> sy;
		if (fx - 2 >= 0 && fy - 2 >= 0)
		{
			cout << arr[sx - 1][sy - 1] - arr[sx - 1][fy - 2] - arr[fx - 2][sy - 1] + arr[fx - 2][fy - 2] << '\n';
		}
		else if (fx - 2 >= 0 && fy - 2 == -1)
		{
			cout << arr[sx - 1][sy - 1] - arr[fx - 2][sy - 1] << '\n';
		}
		else if (fx - 2 == -1 && fy - 2 >= 0)
			cout << arr[sx - 1][sy - 1] - arr[sx - 1][fy - 2] << '\n';
		else
			cout << arr[sx - 1][sy - 1] << '\n';

	}


	return 0;
}