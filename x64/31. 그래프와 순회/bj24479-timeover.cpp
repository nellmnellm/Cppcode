#include <iostream>
#include <vector>
#include <list>

using namespace std;



bool dfs(vector<vector<int>> vec, int veclayer, int num)
{
	int vecsize = vec[veclayer].size();
	for (int i = 0; i < vecsize; i++)
	{
		if (num == vec[veclayer][i])
			return true;
	}
	if (veclayer + 1 < vec.size())
		return dfs(vec, veclayer+1, num);
	
	return false;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N; int M; int R;
	cin >> N >> M >> R;
	vector <vector<int>> vec(N);
	
	
	for (int i = 0; i < M; i++)
	{
		int num1; int num2;
		cin >> num1 >> num2;
		if (num2 == R)
			vec[0].push_back(num1);
		else if (num1 == R)
			vec[0].push_back(num2);
		else
		{
			vec[num1].push_back(num2);
		}
	}
	
	int count = 1;
	for (int i = 0; i < N; i++)
	{
		
		if (dfs(vec, 0, i + 1))
		{
			count++;
			cout << count << '\n';
		}
		else if (i + 1 == R)
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}


	return 0;
}