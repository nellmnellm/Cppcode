#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;



void dfs(int** arr, int N, unordered_map<int, int> &memo, int startnum)
{

	if (memo[startnum])
		return;
	else
		memo[startnum] = 1;


	for (int i=1; i<=N; i++)
	{
		if (arr[startnum-1][i-1] == 1)
			dfs(arr, N, memo, i);
	}
}


int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	int** arr = new int* [N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = new int[N];
	}
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int num1; int num2;
		cin >> num1 >> num2;
		arr[num1-1][num2-1] = 1;
		arr[num2-1][num1-1] = 1;
	}

	unordered_map<int, int> memo;

	dfs(arr, N, memo, 1);
	
	int count = 0;
	for (int i = 2; i <= N; i++)
	{
		if (memo[i])
			count++;
	}
	if(count)
		cout << count;
	return 0;
}