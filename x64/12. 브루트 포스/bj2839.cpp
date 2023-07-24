#include <iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	if (N % 5 == 0)
		cout << N / 5;
	else if (N % 5 == 1)
		cout << (N - 6) / 5 + 2;
	else if (N % 5 == 2 && N != 7)
		cout << (N - 12) / 5 + 4;
	else if (N % 5 == 3)
		cout << (N - 3) / 5 + 1;
	else if (N % 5 == 4 && N != 4)
		cout << (N - 9) / 5 + 3;
	else
		cout << -1;


	return 0;
}