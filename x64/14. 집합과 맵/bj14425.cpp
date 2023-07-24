#include <iostream>
#include <map>
using namespace std;

int main(void)
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; int M;
	cin >> N >> M;
	map<string, int> mon;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		mon[s] = 1;
	}

	int sum = 0;
	for (int i = 0; i < M; i++)
	{
		string s;
		cin >> s;
		if (mon[s])
			sum++;
	}


	cout << sum;

	return 0;
}