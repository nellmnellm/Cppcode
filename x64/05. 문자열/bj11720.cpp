#include <iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	char* C = new char[101];
	cin >> C;

	int sum = 0;
	for (int i = 0; i < N; i++)
	{ 
		sum += C[i]-48;
	}
	cout << sum;
	return 0;
}