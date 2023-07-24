#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int N; int bz;
	vector <int> vec;
	int max = 0;
	cin >> N >> bz;
	for (int i = 0; i < N; i++)
	{
		int card_num;
		cin >> card_num;
		vec.push_back(card_num);
	}
	for (int i = 0; i < vec.size() - 2; i++)
	{
		for (int j = i + 1; j < vec.size() - 1; j++)
		{
			for (int k = j + 1; k < vec.size(); k++)
			{
				int sum3 = vec[i] + vec[j] + vec[k];
				if (bz < sum3)
					continue;
				else
				{
					if (max < sum3)
						max = sum3;
				}
			}
		}
	}
	cout << max;
	return 0;

}