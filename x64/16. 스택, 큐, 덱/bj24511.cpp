#include <iostream>
#include <vector>
#include <array>
#include <deque>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<array<int, 2>> num_vec;
	for (int i = 0; i < N; i++)
	{
		int oneorzero;
		cin >> oneorzero;
		num_vec.push_back({ oneorzero, 0 });
	}

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		num_vec[i][1] = num;
	}

	deque <int> queset;
	for (int i = 0; i < N; i++)
	{
		if (num_vec[i][0] == 0)
			queset.push_back(num_vec[i][1]);
	}
	int M;
	cin >> M;
	vector <int> input;
	for (int i = 0; i < M; i++)
	{
		int arrnum;
		cin >> arrnum;
		input.push_back(arrnum);
	}

	for (int i = 0; i < M; i++)
	{
		queset.push_front(input[i]);
		cout << queset.back() << " ";
		queset.pop_back();
	}

	return 0;
}