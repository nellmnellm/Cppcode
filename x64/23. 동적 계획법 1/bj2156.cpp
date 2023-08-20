#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector <int> podoju;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int ml;
		cin >> ml;
		podoju.push_back(ml);
		sum += ml;
	}
	
	for (int i = 3; i < n; i++)
	{
		podoju[i] += min(min(podoju[i - 1], podoju[i - 2]), podoju[i - 3]);
	}

	if (n >= 3)
	{
		cout << sum - min(min(podoju[n-1], podoju[n - 2]), podoju[n - 3]);
	}
	else
	{
		if (n == 2)
			cout << podoju[0] + podoju[1];
		else
			cout << podoju[0];
	}
	return 0;
}