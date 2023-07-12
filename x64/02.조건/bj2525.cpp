#include <iostream>
using namespace std;

int main(void)
{
	int A; int B; int C;
	cin >> A >> B;
	cin >> C;
	int D; int E;
	D = C / 60;
	E = C % 60;
	A += D;
	B += E;
	if (B >= 60)
	{
		A++;
		B -= 60;
		if (A >= 24)
			A %= 24;
	}
	else
	{
		if (A >= 24)
			A %= 24;
	}
	cout << A << " " << B;
	return 0;
}