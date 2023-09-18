#include <iostream>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	

	int arr[15][14];

	for (int i = 0; i < 14; i++)
	{
		arr[0][i] = i + 1;
	}

	for (int i = 1; i < 15; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			if (!j)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
	}
	int T;
	cin >> T;

	int K; int N;
	for (int i = 0; i < T; i++)
	{
		cin >> K >> N;
		cout << arr[K][N - 1] << '\n';
	}

	return 0;
}