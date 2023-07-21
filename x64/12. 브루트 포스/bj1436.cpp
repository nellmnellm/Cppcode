#include <iostream>
#include <cmath> 
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int count = 0;
	int k = 665;

	while (count != N)
	{
		vector <int> vec;
		for (int n = 0; k / (int)pow(10, n) != 0; n++)
		{

			if (k / (int)pow(10, n) % 10 == 6)
			{
				vec.push_back(6);
				if (vec.size() == 3)
FileName				{
					count++;
					break;
				}
			}
			else
				vec.erase(vec.begin(), vec.end());
		}
		k++;
	}
	cout << k - 1;
	return 0;
}
