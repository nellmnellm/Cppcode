#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int queen(int& N) {
	bool** arr;
	arr = new bool* [N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = new bool[N] {false, };
	}




	vector <int> vec;
	for (int i = 0; i < N; i++)
		vec.push_back(i);

	int count = 0;

	do {
		for (int i = 0; i < N; i++)
		{

			if (arr[i][vec[i]] != true)
			{
				arr[i][vec[i]] = true;
				if (i == N - 1)
				{
					count++;
					break;
				}
			}
			else
				break;

			for (int j = 1; i + j < N; j++)
			{
				if (vec[i] + j < N)
				{
					arr[i + j][vec[i] + j] = 1;
				}
				if (vec[i] - j >= 0)
				{
					arr[i + j][vec[i] - j] = 1;
				}
			}


		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
				arr[i][j] = 0;
		}

	} while (next_permutation(vec.begin(), vec.end()));


	for (int i = 0; i < N; i++)
		delete[] arr[i];
	delete[] arr;


	return count;
}
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	cout << queen(N);


	return 0;
}