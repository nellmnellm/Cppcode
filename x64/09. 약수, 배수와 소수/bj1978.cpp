#include <iostream>
#include <cmath>
using namespace std;

int main(void) 
{
	int N;
	cin >> N;
	int count = 0;
	
	for (int i = 0; i < N; i++)
	{
		int z;
		cin >> z;
		bool sosu = true;
		
		if (z == 1)
		{
			sosu = false;
			continue;
		}
		
		for (int j = 2; j < (int)(sqrt(z) + 1); j++)
		{
			if (z % j == 0 && z != j)
				sosu = false;
		}

		if (sosu == true)
			count++;
	}

	cout << count;

	return 0;
}