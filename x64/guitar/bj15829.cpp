#include <iostream>
#include <cmath>
using namespace std;

long long int returnint(int num) {
	long long int firstNum = 1;
	for (int i = 0; i < num; i++)
	{
		firstNum *= 31;
		firstNum = firstNum % 1234567891;
	}
	return firstNum;
}
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	char* strarr = new char[51];
	cin >> strarr;
	long long int coolNum = 0;

	for (int i = 0; i < n; i++)
	{
		coolNum += (long long int)(strarr[i] - 'a' + 1) * returnint(i);
	}

	cout << coolNum % 1234567891;




	return 0;
}