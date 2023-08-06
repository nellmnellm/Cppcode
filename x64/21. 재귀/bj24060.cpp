#include <iostream>
using namespace std;

/*3 -> 2 1 
4 -> 2 2 -> 1 1 1 1
5 -> 3 2 -> 2 1 2
6 -> 3 3 -> 2 1 / 2 1
7 -> 4 3 -> 2 2 / 2 1
8 -> 4 4 -> 2 2 / 2 2 
8 -> 5 4 -> 3 2 / 2 2 -> 2 1 2 2 2*/

int devide(int n) {
	int count = 0;
	if (n == 1)
		count = 0;
	else if (n == 2)
		count += 2;
	else if (n % 2 == 1)
		count += devide(n / 2 + 1) + devide(n / 2) + n;
	else
		count += devide(n / 2) + devide(n / 2) + n;
	return count;
}

pair<int, int> devideCount(int p, int r, int count = 0, int& K)
{
	int leng = r - p + 1;
	int q = (p + r) / 2;
	if (leng == 2)
	{
		count += 2;
		if (count >= K)
			return make_pair(p, r);
	}

	else if (leng > 2)
	{
		devideCount(p, q, count, K);
		devideCount(q + 1, r, count, K);

		count += leng;
		if (count >= K)
			return make_pair(p, r);
	}
}

int main(void)

{
	int N; int K;
	cin >> N >> K;
	int fullcount = devide(N);
	int *arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		arr[i] = num;
	}

	if (K > fullcount)
	{
		cout << -1;
		return 0;
	}

	cout << devideCount(0, N - 1, 0, K).first << devideCount(0, N-1, 0, K).second;
	


	return 0;
}