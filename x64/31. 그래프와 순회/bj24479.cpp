#include <iostream>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>


using namespace std;



void dfs(map <int, set<int>>& graph, unordered_map<int, int> &memo, int R, int N, int &count)
{

	


	if (memo[R])
		return;
	count++;
	memo[R] = count;
	
		
	for (auto it = graph[R].begin(); it != graph[R].end(); it++)
	{
		dfs(graph, memo, *it, N, count);
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
	int count = 0;

	dfs(graph, memo, R, N, count);

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