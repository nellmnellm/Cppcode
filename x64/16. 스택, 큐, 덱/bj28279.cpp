#include <iostream>
#include <deque>
using namespace std;


int main(void)
{
	int N;
	cin >> N;

	deque <int> deq;
	for (int i = 0; i < N; i++)
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);

		int k;
		cin >> k;
		if (k == 1)
		{
			int num;
			cin >> num;
			deq.push_front(num);
		}

		else if (k == 2)
		{
			int num;
			cin >> num;
			deq.push_back(num);
		}
		else if (k == 3)
		{
			if (deq.size())
			{
				cout << deq.front() << "\n";
				deq.pop_front();
			}
			else
				cout << -1 << "\n";
		}

		else if (k == 4)
		{
			if (deq.size())
			{
				cout << deq.back() << "\n";
				deq.pop_back();
			}
			else
				cout << -1 << "\n";
		}

		else if (k == 5)
			cout << deq.size() << "\n";

		else if (k == 6)
			cout << deq.empty() << "\n";

		else if (k == 7)
		{
			if (deq.size())
				cout << deq.front() << "\n";
			else
				cout << -1 << '\n';
		}
		else if (k == 8)
		{
			if (deq.size())
				cout << deq.back() << "\n";
			else
				cout << -1 << '\n';
		}
	}


	return 0;
}