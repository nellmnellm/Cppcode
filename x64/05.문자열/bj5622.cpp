#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string A;
	cin >> A;
	int sum = 0;
	for (int i = 0; i < A.length(); i++)
		if (0 <= A[i] - (char)'A' && A[i] - (char)'A' <= 2)
			sum += 3;
		else if (3 <= A[i] - (char)'A' && A[i] - (char)'A' <= 5)
			sum += 4;
		else if (6 <= A[i] - (char)'A' && A[i] - (char)'A' <= 8)
			sum += 5;
		else if (9 <= A[i] - (char)'A' && A[i] - (char)'A' <= 11)
			sum += 6;
		else if (12 <= A[i] - (char)'A' && A[i] - (char)'A' <= 14)
			sum += 7;
		else if (15 <= A[i] - (char)'A' && A[i] - (char)'A' <= 18)
			sum += 8;
		else if (19 <= A[i] - (char)'A' && A[i] - (char)'A' <= 21)
			sum += 9;
		else if (22 <= A[i] - (char)'A' && A[i] - (char)'A' <= 25)
			sum += 10;

	cout << sum;
	return 0;
}