#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int max = 1;
	int min = 1000001;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int num;
		cin >> num;
		if (num < min)
			min = num;
		if (num > max)
			max = num;
	}

	cout << max * min;
	return 0;
}