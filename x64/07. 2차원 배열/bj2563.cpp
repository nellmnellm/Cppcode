#include <iostream>

using namespace std;

int main(void)
{
	int arr[100][100];
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
			arr[i][j] = 0;
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int row;
		int col;
		cin >> row >> col;
		for (int j = row; j < row + 10; j++)
		{
			for (int k = col; k < col + 10; k++)
				arr[j][k] = 1;
		}
	}
	
	int arrsum = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
			arrsum += arr[i][j];
	}

	cout << arrsum;



	return 0;
}