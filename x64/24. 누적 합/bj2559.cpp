#include <iostream>
#include <vector>
using namespace std;


int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N; int M;
	cin >> N >> M;
	vector <int> vec;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		if (i == 0)
			vec.push_back(num);
		else
			vec.push_back(num + vec[i - 1]);
	}

	int max;
	for (int i = M - 1; i < N; i++)
	{
		if (i == M - 1)
			max = vec[i];
		else
		{
			if (max < vec[i] - vec[i - M])
				max = vec[i] - vec[i - M];
		}
	}

	cout << max;


	return 0;
}