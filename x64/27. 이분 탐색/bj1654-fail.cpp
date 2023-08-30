#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; int K;
	cin >> N >> K;

	priority_queue <pair<double, int>> max_num;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		max_num.push({(double) num / 2 , num });
	}


	for (int i = 0; i < K - N; i++)
	{
		auto pair1 = max_num.top();
		max_num.pop();
		max_num.push({ (double)pair1.second / (double)((pair1.second / pair1.first)+ 1) , pair1.second });
	}
	int minnum = 2147483647;
	for (int i = 0; i < N; i++)
	{
		auto pair2 = max_num.top();
		int realnum = (int)((double)pair2.second /(double)((pair2.second / pair2.first) - 1));
		if (realnum < minnum)
			minnum = realnum;
		max_num.pop();
	}
	cout << minnum;

	return 0;
}