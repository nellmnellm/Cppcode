#include <iostream>
using namespace std;

int main(void) {
	int T;
	cin >> T;
	char firstSt[51];
	cin >> firstSt;

	for (int i = 0; i < T-1; i++)
	{
		char st[51];
		cin >> st;
		for (int j = 0; j < 50; j++)
		{
			if (firstSt[j] != st[j])
				firstSt[j] = '?';
		}
	}
	
	cout << firstSt;





	return 0;
}