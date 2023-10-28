#include <iostream>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int** arr = new int* [1001];
	for (int i = 0; i < 1001; i++)
	{
		arr[i] = new int[1001];
	}


	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			char num;
			cin >> num;
			if (num == '.')
				arr[i][j] = 0;
			else
			{
				arr[i][j] = (int)(num - '0');
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i][j] > 0)
			{
				cout << "*";
				continue;
			}

			int boomsum = 0;

			int kfirst; int klast; int lfirst; int llast;

			if (i >= 1)
				kfirst = i - 1;
			else
				kfirst = i;

			if (i <= N - 2)
				klast = i + 1;
			else
				klast = i;

			if (j >= 1)
				lfirst = j - 1;
			else
				lfirst = j;

			if (j <= N - 2)
				llast = j + 1;
			else
				llast = j;


			for (int k = kfirst; k <= klast; k++)
			{
				for (int l = lfirst; l <= llast; l++)
					boomsum += arr[k][l];
			}
			boomsum -= arr[i][j];

			if (boomsum >= 10)
				cout << "M";
			else
				cout << boomsum;
		}
		cout << '\n';
	}


	return 0;
}