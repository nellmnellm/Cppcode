#include <iostream>
using namespace std;

void hanoi(int N) {

	int a = 1;
	int b = 2;
	int c = 3;

	if (N == 1)
		cout << a << " " <<  c << endl;
	else if (N == 2)
	{
		cout << a << " " << b << endl;
		cout << a << " " << c << endl;
		cout << b << " " << c << endl;
	}
	else if (N % 2 == 1)
	{
		hanoi(N - 2);
		cout << a << " " << c << endl;
		a = 3; b = 1; c = 2;
		hanoi(N - 1);
	
	}

}
int main(void)
{
	int N;
	cin >> N;
	hanoi(N);



	return 0;
}
