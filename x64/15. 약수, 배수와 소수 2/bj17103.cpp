#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector <int> vec;

	for (int i = 3; i <= 999997; i++)
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

	int T;
	cin >> T;
	for (int i=0; i<T; i++)
	{
		int N;
		cin >> N;
		int part = 0;

		for (int j = 0; j < vec.size(); j++)
		{
			if (N <= 8)
			{
				part+=2;
				break;
			}

			for (int k = vec.size() - 1; k >= 0; k--)
			{
				if (vec[j] + vec[k] == N)
				{
					part++;
					break;
				}
			}
		}
		cout << part / 2 << "\n";
	}

	return 0;
}