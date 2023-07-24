#include <iostream>
using namespace std;

int main(void)
{
	int H;
	int M;
	cin >> H >> M;
	if (M >= 45)
		cout << H <<" "<< M - 45;
	else
		if (H == 0)
			cout << H + 23 << " " << M + 15;
		else
			cout << H - 1 << " " << M + 15;
	return 0;
}