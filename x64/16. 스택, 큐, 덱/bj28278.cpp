#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	stack<int> stack;

	for (int i = 0; i < N; i++)
	{

		int k;
		cin >> k;
		if (k == 1)
		{
			int l;
			cin >> l;
			stack.push(l);
		}
		else if (k == 2)
		{
			if (stack.size() == 0)
				cout << "-1" << "\n";
			else
			{
				cout << stack.top() << "\n";
				stack.pop();
			}
		}
		else if (k == 3)
		{
			cout << stack.size() << "\n";
		}
		else if (k == 4)
		{
			cout << (int)(stack.size() == 0) << "\n";
		}
		else
		{
			if (stack.size() == 0)
				cout << "-1" << "\n";
			else
				cout << stack.top() << "\n";
		}


	}

	return 0;
}