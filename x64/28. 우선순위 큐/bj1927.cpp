#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<int> bigheap;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		if (num)
		{
			bigheap.push(-num);
		}
		else
		{
			if (!bigheap.empty())
			{
				cout << -(bigheap.top()) << '\n';
				bigheap.pop();
			}
			else
				cout << 0 << '\n';

		}
	}



	return 0;
}