#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N; int M;
	cin >> N >> M;
	vector <int> vec;
	for (int i = 0; i < N; i++)
		vec.push_back(i + 1);

	while (next_permutation(vec.begin(), vec.end()))
	{
		for (int i = 0; i < M; i++)
		{
			cout << vec[i] << " ";
		}
	}

	

	return 0;
}