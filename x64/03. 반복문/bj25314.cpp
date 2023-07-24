#include <iostream>

using namespace std;


int main(void)
{
	int N; int M;
	cin >> N;
	M = N / 4;
	for (int i = 0; i < M; i++)
		cout << "long ";
	cout << "int";
	return 0;
}