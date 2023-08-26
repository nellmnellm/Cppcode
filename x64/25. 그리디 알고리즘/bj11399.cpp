#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector <int> vec;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += vec[i] * (N-i);
	}



	cout << sum;


	return 0;
}