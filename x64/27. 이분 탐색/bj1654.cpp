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

	vector <int> vec;
	vector <int> nanut;
	vector <int> count;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
		count.push_back(2);
		nanut.push_back(num / 2);
	}

	for (int i = 0; i < K - N; i++)
	{
		int index = max_element(nanut.begin(), nanut.end()) - nanut.begin();
		count[index]++;
		nanut[index] = vec[index] / count[index];
	}

	int min = 2147483647;
	for (int i = 0; i < N; i++)
	{
		count[i]--;
		nanut[i] = vec[i] / count[i];
	}

	cout << *min_element(nanut.begin(), nanut.end());

	
	return 0;

}