#include <iostream>
#include <array>
using namespace std;

int main(void)
{

	array <int, 5> arr;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	cout << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5 << endl;
	cout << arr[2];
	return 0;
}
