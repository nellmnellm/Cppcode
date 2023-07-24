#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N;
	vector <int> arr;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		arr.push_back(a);
	}
	double max = *max_element(arr.begin(), arr.end());
	double sum = 0.0;
	for (int i = 0; i < N; i++)
		sum += arr[i] / max * 100 ;
	cout << sum / N ;
	return 0;
}