#include <iostream>
#include <deque>
#include <array>

using namespace std;



int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	deque <array<int, 2>> deq;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		deq.push_back({ i + 1, num });
	}

	for (int i = 0; i < N; i++)
	{
		int jump = deq.front()[1];
		cout << deq.front()[0] << " ";
		deq.pop_front();
		if (deq.size() > 0 && jump > 0)
		{
			for (int j = 0; j < jump-1; j++)
			{
				deq.push_back(deq.front());
				deq.pop_front();
			}
		}
		
		else if (deq.size() > 0 && jump < 0)
		{
			for (int j = 0; j < -jump; j++)
			{
				deq.push_front(deq.back());
				deq.pop_back();
			}
		}
	}
	return 0;
}