#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 10 20 11 15 19 22 30 25 -> 5
//   1   2 2  3  4  5 6  6
int main(void)
{
	int N;
	cin >> N;

	int arr[1001];
	vector<int> numbering[1001] = { {},};
	

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	numbering[0].push_back(0);  // 0번 인덱스에는 {0}

	for (int i = 1; i < N; i++)
	{
		int maxj = 0;
		int maxindex;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i])
			{
				if (maxj <= numbering[j].size())
				{
					maxj = numbering[j].size() + 1;
					maxindex = j;
				}
			}
		}
		if (maxj)
		{
			numbering[i].insert(numbering[i].end(), numbering[maxindex].begin(), numbering[maxindex].end());
			numbering[i].push_back(i);
		}
		else
			numbering[i].push_back(i);
	}

	int maxNum = 1;
	int maxNumindex;
	for (int i = 1; i < N; i++)
	{
		maxNum = max(maxNum, (int)numbering[i].size());
		if (maxNum == (int)numbering[i].size())
			maxNumindex = i;
	}


	cout << maxNum << '\n';
	for (int i = 0; i < numbering[maxNumindex].size(); i++)
	{
		cout << arr[numbering[maxNumindex][i]] << ' ';
	}



	return 0;
}