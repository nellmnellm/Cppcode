#include <iostream>
#include <deque>
using namespace std;





int main(void) {
	int N;
	cin >> N;
	deque <int> que;
	que.push_back(N);
	int count = 0;
	if (N == 1)
	{
		cout << count;
		return 0;
	}
	bool one = false;
	while (one == false)
	{
		
		int queSize = que.size();
		for (int i = 0; i < queSize; i++)
		{
			if (!(que.front() % 3))
			{
				que.push_back(que.front() / 3);
				if (que.front() / 3 == 1)
				{
					one = true; 
					break;
				}	
			}
			if (!(que.front() % 2))
			{
				que.push_back(que.front() / 2);
				if (que.front() / 2 == 1)
				{
					one = true;
					break;
				}
			}
				
			que.push_back(que.front() - 1);
			if (que.front() - 1 == 1)
			{
				one = true;
				break;
			}
			
			
			if (one == true)
			{
				break;
			}
			que.pop_front();
		}
		
		count++;

	}
	cout << count;


	return 0;
	
}
	