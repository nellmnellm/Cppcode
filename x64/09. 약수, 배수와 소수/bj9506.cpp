#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	while (true)
	{
		int n;
		cin >> n;
		if (n == -1)
			break;
	

		int sum = 0;
		vector<int> arr;
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				sum += i;
				arr.push_back(i);
			}
		}

		if (n == sum + 1)
		{
			cout << n << " = 1";
			for (int j = 0; j < arr.size(); j++)
				cout << " + " << arr[j];
			cout << endl;
		}
		else
			cout << n << " is NOT perfect." << endl;
	}


	return 0;
}
