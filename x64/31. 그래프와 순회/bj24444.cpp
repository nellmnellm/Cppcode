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

	while (!que.empty()){
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



int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N; int M; int R;
	cin >> N >> M >> R;
	map <int, set<int>> graph;
	unordered_map<int, int> memo;

	for (int i = 0; i < M; i++)
	{
		int num1; int num2;
		cin >> num1 >> num2;

		
		
		graph[num1].insert(num2);
		graph[num2].insert(num1);
		
	}
	

	bfs(graph, memo, R, N);


	for (int i = 1; i <= N; i++)
	{

		if (memo[i])
		{
			cout << memo[i] << '\n';
		}
		else
			cout << 0 << '\n';
	}




	return 0;
}