#include <iostream>

using namespace std;

int main(void)
{
	int arr[9][9];
	int max = 0;
	int maxrow = 0;
	int maxcol = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				maxrow = i;
				maxcol = j;

			}
		}
	}
	cout << max << endl;
	cout << maxrow+1 << " "<< maxcol+1;
	
	return 0;
		
}
