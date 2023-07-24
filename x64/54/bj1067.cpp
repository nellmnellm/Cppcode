#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	
	vector <int> vec1;
	vector <int> vec2;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		vec1.push_back(a);
	}

	vector <int> doublevec(vec1.begin(), vec1.end());
	vec1.insert(vec1.end(), doublevec.begin(), doublevec.end());

	for (int i = 0; i < N; i++)
	{
		int b;
		cin >> b;
		vec2.push_back(b);
	}

	int maxsum = 0;
	
	for (int i = 0; i < N; i++)
	{
		int sum = 0;
		for (int j = 0; j < N; j++)
			sum += vec1[i + j] * vec2[j];

		if (maxsum < sum)
			maxsum = sum;
	}

	cout << maxsum;
	return 0;
}