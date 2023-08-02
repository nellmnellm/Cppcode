#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int K;
	cin >> K;
	stack <int> stk;
	int sum = 0;
	for (int i = 0; i < K; i++)
	{
		int k;
		cin >> k;
		if (k == 0)
		{
			sum -= stk.top();
			stk.pop();
		}
		else
		{
			stk.push(k);
			sum += stk.top();
		}
	}

	cout << sum;



	return 0;
}