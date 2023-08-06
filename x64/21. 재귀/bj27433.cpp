#include <iostream>
using namespace std;

long long facto(int a) {
	if (a == 1 || a == 0)
		return 1;
	else 
		return a * facto(a - 1);
}

int main(void)
{
	int N; 
	cin >> N;
	cout << facto(N);






	return 0;

}