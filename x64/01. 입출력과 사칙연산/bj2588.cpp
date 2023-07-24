#include <iostream>
using namespace std;
int main(void)
{
	int A;
	int B;
	cin >> A;
	cin >> B;
	int E = A * B;
	int C = B / 100;
	B %= 100;
	int D = B / 10;
	B %= 10;
	
	cout << A*B << endl;
	cout << A*D << endl;
	cout << A*C << endl;
	cout << E << endl;
 	
	return 0;
}