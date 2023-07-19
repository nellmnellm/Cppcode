#include <iostream>
#include <array>
using namespace std;

int main(void) {
	array <array<int, 9>, 9> arr{};

	for (int i = 0; i < 9; i++)
	{
		int count=0;
		int countj=0;
		int sum=0;
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 0)
			{
				count++;
				countj += j;
			}
			else
				sum += arr[i][j];
		}
		if (count == 1)
			arr[i][countj] = 45 - sum;
	}
	
	for (int j = 0; j < 9; j++)
	{
		int count=0;
		int counti=0;
		int sum=0;
		for (int i = 0; i < 9; i++)
		{
			if (arr[i][j] == 0)
			{
				count++;
				counti += i;
			}
			else
				sum += arr[i][j];
		}
		if (count == 1)
			arr[counti][j] = 45 - sum;
	}

	
	for (int i = 0; i < 3; i++)
	{
		
		for (int l = 0; l < 3; l++)
		{
			int countj=0;
			int countk=0;
			int sum=0;
			for (int j = 3 * i; j < 3 * i + 3; j++)
			{
				for (int k = 3 * l; k < 3 * l + 3; k++)
				{	
					sum += arr[j][k]; 
					if (arr[j][k] == 0)
					{
						countj = j;
						countk = k;
					}
				}
				
			}
			if (sum!=45)
				arr[countj][countk] = 45 - sum;
		}

	}
	

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	return 0;
}