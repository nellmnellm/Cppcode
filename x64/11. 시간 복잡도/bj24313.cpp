#include <iostream>
using namespace std;
int main(void)
{
	int a1; int a0; int c; int n0;
	cin >> a1 >> a0;
	cin >> c;
	cin >> n0;

	if (n0 * a1 + a0 <= c * n0 && a1 <= c) cout << 1 << endl;
	else cout << 0 << endl;

	return 0;

}