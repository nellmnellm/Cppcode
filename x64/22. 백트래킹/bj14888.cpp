#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int kesan(int a, int b, int yonsan);

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector <int> numvec;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		numvec.push_back(num);
	}

	vector <int> yon;
	for (int i = 0; i < 4; i++)
	{
		int yonsan;
		cin >> yonsan;
		for (int j = 0; j < yonsan; j++)
		{
			yon.push_back(i); // 0은 + 1은 - 2는 x 3은 /
		}
	}

	int min = 1000000000;
	int max = -1000000000;
	do {
		int a = numvec[0];
		for (int i = 1; i < N; i++)
			a = kesan(a, numvec[i], yon[i - 1]);
		if (a < min)
			min = a;
		if (a > max)
			max = a;

	} while (next_permutation(yon.begin(), yon.end()));


	cout << max << '\n' << min;
	return 0;
}

int kesan(int a, int b, int yonsan) {
	if (yonsan == 0)
		return a + b;
	else if (yonsan == 1)
		return a - b;
	else if (yonsan == 2)
		return a * b;
	else
		return a / b;
}