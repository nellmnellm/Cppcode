#include <iostream>
using namespace std;

int main(void)
{
	int T;
	int A; int B;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		cin >> A >> B;
		cout << "Case #"<< i <<": "<< A << " + " << B << " = " << A + B << endl;

	}

	return 0;
}