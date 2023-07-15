#include <iostream>
#include <array>

using namespace std;

int main(void)
{
	array <char*, 5> arr;
	for (int i = 0; i < 5; i++)
	{
		char* arr2 = new char[15];
		arr[i] = arr2;
	}
	
	for (int i = 0; i < 5; i++)
		cin >> arr[i];


	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (0 < arr[j][i] && arr[j][i] < 128)
				cout << arr[j][i];
		}
	}
	return 0;
}