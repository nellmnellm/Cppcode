#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	queue<int> jool;
	stack<int> degi;
	int deginum = 0;
	
	
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		jool.push(num);
	}

	while (deginum != N)
	{
		if (jool.size()>0 && jool.front() == deginum + 1)
		{
			deginum++;
			jool.pop();
		}
		else if (degi.size()>0 && degi.top() == deginum + 1)
		{
			deginum++;
			degi.pop();
		}
		else
		{
			if (jool.size() == 0)
			{
				cout << "Sad";
				break;
			}
			else
			{
				degi.push(jool.front());
				jool.pop();
			}
		}
		
	}
	if (deginum == N)
		cout << "Nice";


	return 0;
}