#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	map <int, int> map;
	vector<int> vec;
	for (int i = 0; i < N; i++)
	{
		int A; int B;
		cin >> A >> B;
		map[A] = B;
	}
	
	for (auto it = map.begin(); it!= map.end(); it++)
	{
		vec.push_back(it->second);
	}

	
	int numbering[501] = { 0, };
	numbering[0] = 1;

	for (int i = 1; i < N; i++)
	{
		int maxnumj = 1;

		for (int j = 0; j < i; j++)
		{
			if (vec[j] < vec[i])
			{
				if (maxnumj <= numbering[j])
					maxnumj = numbering[j] + 1;
			}
		}
		numbering[i] = maxnumj;
	}

	int maxNum = 1;
	for (int i = 1; i < N; i++)
	{
		maxNum = max(maxNum, numbering[i]);
	}

	
	cout << N - maxNum;


	return 0;
}