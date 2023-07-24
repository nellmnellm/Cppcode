#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> arr;
	
	int num;
	while (cin >> num)
	{
		arr.push_back(num);
		if (cin.eof()==true)
			break;
	}
	
	int arnum = 1;
	int max;
	max = arr[0];
	for (int i=1; i<arr.size(); i++)
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


##문제를 잘못 판단했음 
