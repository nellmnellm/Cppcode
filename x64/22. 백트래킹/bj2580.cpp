#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[9][9] = { 0, };
	
	deque < pair<int, int >> deq;
	
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 0)
			{
				deq.push_back(make_pair(i, j));
			}
		}
	}
	
	while (!deq.empty())
	{
		int countx = 0; int county = 0; int countsquare = 0;
		int sumx = 0; int sumy = 0; int sumsquare = 0;


		pair<int, int> i = deq.back();
		for (int j = 0; j < 9; j++)
		{
			if (arr[i.first][j])
			{
				countx++;
				sumx += arr[i.first][j];
			}
		}
		if (countx == 8)
		{
			arr[i.first][i.second] = 45 - sumx;
			deq.pop_back();
			continue;
		}

		for (int j=0; j<9; j++)
		{
			if (arr[j][i.second])
			{
				county++;
				sumy += arr[j][i.second];
			}
		}
		if (county == 8)
		{
			arr[i.first][i.second] = 45 - sumy;
			deq.pop_back();
			continue;
		}

		for (int j = (int)((i.first) / 3) * 3; j <= (int)((i.first) / 3) * 3 + 2; j++)
		{
			for (int k = (int)((i.second) / 3) * 3; k <= (int)((i.second) / 3) * 3 + 2; k++)
			{
				if (arr[j][k])
				{
					countsquare++;
					sumsquare += arr[j][k];
				}
			}
		}

		if (countsquare == 8)
		{
			arr[i.first][i.second] = 45 - sumsquare;
			deq.pop_back();
			continue;
		}

		if (!arr[i.first][i.second])
		{
			deq.push_front(deq.back());
			deq.pop_back();
		}

		
	}
	

	

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
			cout << arr[i][j] << " ";
		cout << '\n';
	}

	return 0;
}