#include <iostream>
#include <map>
#include <unordered_map>
#include <list>

using namespace std;




bool dfs(map<int, list<int>>& graph, unordered_map<int, bool>& memo, int current, int target) {
	if (current == target)
	{
		memo[current] = true;
		return true;
	}

	if (memo.find(current) != memo.end())
		return memo[current];

    for (auto it = graph[current].begin(); it != graph[current].end(); it++) {
		if (dfs(graph, memo, *it, target))
		{
			memo[current] = true;
			return true;
		}
    }

	memo[current] = false;
    return false;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N; int M; int R;
	cin >> N >> M >> R;
	map <int, list<int>> graph;
	unordered_map<int, bool> memo;

	for (int i = 0; i < M; i++)
	{
		int num1; int num2;
		cin >> num1 >> num2;
		if (num2 == R)
			graph[R].push_back(num1);
		else if (num1 == R)
			graph[R].push_back(num2);
		else
		{
			graph[num1].push_back(num2);
		}
	}

   
	int count = 1;
	for (int i = 1; i <= N; i++)
	{
		dfs(graph, memo, i, R);
		if (i == R)
		{
			cout << '1' << endl;
		}
		else if (memo[i])
		{
			count++;
			cout << count << endl;
			
		}
		else
			cout << '0' << endl;
	}
    return 0;
}