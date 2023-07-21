#include <iostream>
#include <array>
using namespace std;

int main(void)
{
	int N; int M;
	cin >> N >> M;
	array <array<int, 50>, 50> arr;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			char cha;
			cin >> cha;
			arr[i][j] = cha;
		}
	}

	array <array<int, 8>, 8> arr1;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
				arr1[i][j] = 87;
			else
				arr1[i][j] = 66;
		}
	}


	int min = 64;
	for (int p = 0; p <= N - 8; p++)
	{
		for (int q = 0; q <= M - 8; q++)
		{
			int count1 = 0;
			int count2 = 0;

			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (arr[i + p][j + q] != arr1[i][j])
						count1++;
					else
						count2++;
				}
			}
			if (min > count1)
				min = count1;
			if (min > count2)
				min = count2;

		}
	}
	cout << min;
	return 0;
}