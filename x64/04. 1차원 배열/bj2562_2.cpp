#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector <int> arr;
	
	int num;
	for (int i=0; i<9; i++) 
	{
		cin >> num;
		arr.push_back(num);
	}
	
	int arnum = 1;
	int max;
	max = arr[0];
	for (int i=1; i<9; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			arnum = i+1;
		}
	}
	cout << max << " "<< arnum << endl;
	return 0;
}

