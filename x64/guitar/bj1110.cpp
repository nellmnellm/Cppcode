#include <iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int count = 0;
	int first = N;
	while (true)
	{
		int num1 = N / 10;
		int num2 = N % 10;

		
		
		N = 10 * num2 + (num1 + num2) % 10;
		count++;
		if (N == first)
			break;
	}
	



	cout << count;


	return 0;
}