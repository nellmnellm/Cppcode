#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue<int, vector<int>, greater<int> > que;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int z;
		cin >> z;
		que.push(z);
	}

	for (int i = 0; i < N; i++)
	{
		int y = que.top();
		que.pop();
		cout << y << "\n";
	}



	return 0;
}