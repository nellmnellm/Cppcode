#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector <int> vec;
	map <int, int> map;
	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
		if (map[num])
			map[num]++;
		else
			map[num] = 1;
		sum += num;
	}
	sort(vec.begin(), vec.end());
	if (sum / N >= -0.5 && sum / N < 0)
		cout << 0 << '\n';
	else
		cout << round(sum / N) << '\n';

	cout << vec[(N - 1) / 2] << '\n';
	int max= -4000;
	vector <int> maxnum;
	for (auto pair : map)
	{
		if (max < pair.second)
		{
			max = pair.second;
			maxnum.clear();
			maxnum.push_back(pair.first);
		}
		else if (max == pair.second)
			maxnum.push_back(pair.first);
	}
	sort(maxnum.begin(), maxnum.end());
	if (maxnum.size() >= 2)
		cout << maxnum[1] << '\n';
	else
		cout << maxnum[0] << '\n';
	
	
	cout << vec[N - 1] - vec[0];


	return 0;
}