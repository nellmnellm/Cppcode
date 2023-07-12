#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string A;
	string B;
	cin >> A >> B;
	int C; int D;
	C = (A[0] - (char)'0') + (A[1] - (char)'0') * 10 + (A[2] - (char)'0') * 100;
	D = (B[0] - (char)'0') + (B[1] - (char)'0') * 10 + (B[2] - (char)'0') * 100;
	if (C >= D)
		cout << C;
	else
		cout << D;
	return 0;
}