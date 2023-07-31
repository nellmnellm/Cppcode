#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector <int> vec;

	for (int i = 2; i <= 246912; i++)
	{
		bool sosu = true;

		for (int j = 2; j <= (int)(sqrt(i) + 1); j++)
		{
			
			if (i % j == 0 && i != j)
			{
				sosu = false;
				break;
			}
		}

		if (sosu == true)
		{
			vec.push_back(i);
		}
	}
	while (true)
	{
		int N;
		cin >> N;
		if (N == 1)
		{
			cout << 1 << "\n";
			continue;
		}

		if (N == 0)
			break;


		int min; int max;

		for (int i = 0; i < vec.size(); i++)
		{
			if (vec[i] > N)
			{
				min = i;
				break;
			}
		}
		for (int i = vec.size() - 1; i >= 0; i--)
		{
			if (vec[i] <= 2 * N)
			{
				max = i;
				break;
			}
		}
		cout << max - min + 1 << "\n";
		
	}
	
	return 0;
}