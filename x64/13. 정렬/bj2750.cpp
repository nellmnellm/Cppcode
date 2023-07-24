#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	deque <int> dq;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		dq.push_back(a);
	}
	sort(dq.begin(), dq.end());
	//for (int i = 0; i < dq.size(); i++)
	//	cout << dq[i] << endl;
	for (int i = 0; i < N; i++)
	{
		cout << dq[0] << endl;
		dq.pop_front();
	}
	return 0;
}
