#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	if (!N)
	{
		cout << 0;
		return 0;
	}

	int a = round((double) N * 0.15);
	vector <int> vec;
	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		vec.push_back(n);
	}

	sort(vec.begin(), vec.end());

	int sum = 0;
	for (int i = a; i < N - a; i++)
	{
		sum += vec[i];
	}

	cout << (int) round((double) sum / (double)(N - 2 * a));


	return 0;
}