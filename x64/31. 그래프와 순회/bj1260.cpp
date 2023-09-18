#include <iostream>
#include <map>
#include <unordered_map>
#include <set>
#include <queue>
#include <algorithm>


using namespace std;



void bfs(map <int, set<int>>& graph, unordered_map<int, int>& memo, int R, int N)
{
	int count = 1;
	queue<int> que;

	que.push(R);
	memo[R] = count;

	while (!que.empty()) {
		int node = que.front();
		que.pop();

		for (auto it = graph[node].begin(); it != graph[node].end(); it++)
		{
			if (!memo[*it])
			{
				memo[*it] = ++count;
				que.push(*it);
			}

		}
	}





}




void dfs(map <int, set<int>>& graph, unordered_map<int, int>& memo2, int R, int N, int& count)
{




	if (memo2[R])
		return;
	count++;
	memo2[R] = count;


	for (auto it = graph[R].begin(); it != graph[R].end(); it++)
	{
		dfs(graph, memo2, *it, N, count);
	}

}


int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N; int M; int R;
	cin >> N >> M >> R;
	map <int, set<int>> graph;
	unordered_map<int, int> memo;
	unordered_map<int, int> memo2;
	for (int i = 0; i < M; i++)
	{
		int num1; int num2;
		cin >> num1 >> num2;



		graph[num1].insert(num2);
		graph[num2].insert(num1);

	}
	int count = 0;

	dfs(graph, memo2, R, N, count);

	for (int i = 1; i <= N; i++)
	{

		if (memo2[i])
		{
			cout << memo2[i] << ' ';
		}
		else
			cout << 0 << ' ';
	}
	cout << '\n';

	bfs(graph, memo, R, N);
	

	for (int i = 1; i <= N; i++)
	{

		if (memo[i])
		{
			cout << memo[i] << ' ';
		}
		else
			cout << 0 << ' ';
	}
	
	

	
	return 0;
}