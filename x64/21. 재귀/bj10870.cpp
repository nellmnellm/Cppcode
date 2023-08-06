#include <iostream>
using namespace std;

int fibo(int N) {
	if (N >= 2)
		return fibo(N - 1) + fibo(N - 2);
	else if (N == 1)
		return 1;
	else
		return 0;
}
int main(void)
{
	int N;
	cin >> N;
	cout << fibo(N);




	return 0;
}