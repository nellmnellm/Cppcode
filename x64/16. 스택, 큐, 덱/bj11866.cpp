#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; int K;
	cin >> N >> K;
	queue <int> yos;
	for (int i = 1; i < N; i++)
	{
		if (i <= N - K)
			yos.push( i + K);
		else
			yos.push( i - (N - K) );
	}
	cout << "<" << K;
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < K - 1; j++)
		{
			yos.push(yos.front());
			yos.pop();
		}
		cout << ", " << yos.front();
		yos.pop();
	}
	cout << ">";

	return 0;
}