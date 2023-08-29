#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; int K;
	cin >> N >> K;
	vector <pair<int, int>> vec;
	vector <int> bevec;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		vec.push_back({num, 2});
		bevec.push_back(num/2);
	}


	
	for (int i = 0; i < K-N; i++)
	{
		int index = max_element(bevec.begin(), bevec.end())-bevec.begin();
		vec[index].second += 1;
		bevec[index] = vec[index].first / vec[index].second;
		
	}
	for (int i = 0; i < N; i++)
	{
		vec[i].second -= 1;
		bevec[i] = vec[i].first / vec[i].second;
	}
	cout << *min_element(bevec.begin(), bevec.end());
	return 0;
}

// 802 -> 401 -> 267 
// 743 -> 371 -> 248
// 457 -> 228
// 539 ->269 