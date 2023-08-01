#include <iostream>
#include <cmath>
using namespace std;

//약수의 개수가 홀수면 open. 짝수면 close;
//소수의 곱으로 나타냈을 때 ^1인경우 무조건 약수가 짝수. ^2 ^4 등 제곱수여야함  

int main(void)
{
	int N;
	cin >> N;
	cout << (int)sqrt(N);

	

	return 0;
}

// 1 1 1 1 1 1 1 1 1 1
// 1 0 1 0 1 0 1 0 1 0
// 1 0 0 0 1 1 1 0 0 0
// 1 0 0 1 1 1 1 1 0 0
// 1 0 0 1 0 1 1 1 0 1
// 1 0 0 1 0 0 1 1 0 1
// 1 0 0 1 0 0 0 1 0 1
// 1 0 0 1 0 0 0 0 0 1
// 1 0 0 1 0 0 0 0 1 1
// 1 0 0 1 0 0 0 0 1 0