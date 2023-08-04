#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	queue <int> q;
	int N;
	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++)
	{
		string s;
		getline(cin, s);

		if (s == "pop")
		{
			if (q.size())
			{
				cout << q.front() << "\n";
				q.pop();
			}
			else
				cout << -1 << "\n";
		}

		else if (s == "size")
			cout << q.size() << "\n";

		else if (s == "empty")
			cout << q.empty() << "\n";

		else if (s == "front")
		{
			if (q.size())
				cout << q.front() << "\n";
			else
				cout << -1 << "\n";
		}
		else if (s == "back")
		{
			if (q.size())
				cout << q.back() << "\n";
			else
				cout << -1 << "\n";
		}
		else
			q.push((stoi(s.substr(5))));
	}

	return 0;
}
