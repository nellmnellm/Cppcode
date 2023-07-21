#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int N; int k;
	cin >> N >> k;
	int* arr = new int[N];


	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}


	cout << arr[k - 1];
	return 0;
}
