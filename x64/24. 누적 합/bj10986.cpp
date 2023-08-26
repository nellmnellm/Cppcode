#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; int M;
	cin >> N >> M;

	vector<int> vec;
	long long int arr[1001] = { 0, };


	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		if (!vec.size())
			vec.push_back(num % M);
		else
			vec.push_back((num % M + vec[i - 1]) % M);

	}

	for (int i = 0; i < vec.size(); i++)
	{
		arr[vec[i]]++;
	}
	long long count = 0;

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == 0)
			count++;
	}
	for (int i = 0; i < 1001; i++)
	{

		if (arr[i] >= 2)
			count += arr[i] * (arr[i] - 1) / 2;
	}

	cout << count;
	return 0;
}