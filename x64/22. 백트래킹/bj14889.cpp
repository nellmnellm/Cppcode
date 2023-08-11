#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 
using namespace std;


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	int arr[20][20] = { 0, };
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];
	}
	vector <int> vec(N, 0);
	vector <int> vecnum(N, 0);
	for (int i = 0; i < N / 2; i++)
		vec[i] = 0;
	for (int i = N / 2; i < N; i++)
		vec[i] = 1;
	for (int i = 0; i < N; i++)
		vecnum[i] = i;

	vector <int> start;
	vector <int> link;
	int min = 1000000;
	do {
		for (int i = 0; i < N; i++)
		{
			if (vec[i] == 1)
				start.push_back(vecnum[i]);
			else
				link.push_back(vecnum[i]);
		}


		int startSum = 0;
		int linkSum = 0;
		for (int j = 0; j < N / 2 - 1; j++)
		{
			for (int k = j + 1; k < N / 2; k++)
			{
				startSum += arr[start[j]][start[k]];
				startSum += arr[start[k]][start[j]];
				linkSum += arr[link[j]][link[k]];
				linkSum += arr[link[k]][link[j]];
			}
		}
		if (min > (int) abs(startSum - linkSum))
			min = (int)abs(startSum - linkSum);

		start.clear();
		link.clear();

	} while (next_permutation(vec.begin(), vec.end()));


	cout << min;




	return 0;
}