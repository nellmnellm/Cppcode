#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	stack <int> stk;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		if (s == "push") {
			int num;
			cin >> num;
			stk.push(num);
		}
		else if (s == "top") {
			if (!stk.empty())
			{
				cout << stk.top() << '\n';
			}
			else
				cout << -1 << '\n';
		}
		else if (s == "pop") {
			if (!stk.empty())
			{
				cout << stk.top() << '\n';
				stk.pop();
			}
			else
				cout << -1 << '\n';
		}
		else if (s == "size") { 
			cout << stk.size() << '\n';
		}
		else {
			cout << (int)(stk.empty()) << '\n';

		}

	}


	return 0;
}