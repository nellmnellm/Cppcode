#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main(void) {
	
	int N;
	cin >> N;
	vector <int> firstArr;
	vector <int> secondArr;
	for (int i = 0; i < N; i++)
	{
		int num1;
		cin >> num1;
		firstArr.push_back(num1);
	}
	for (int i = 0; i < N; i++)
	{
		int num2;
		cin >> num2;
		secondArr.push_back(num2);
	}

	sort(firstArr.begin(), firstArr.end());
	sort(secondArr.begin(), secondArr.end());

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += firstArr[i] * secondArr[N - 1 - i];
	}

	cout << sum;

	return 0;
}