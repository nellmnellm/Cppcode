#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	array <int, 10000> arr = { 0, };
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int z;
		cin >> z;
		arr[z - 1]++;
	}

	for (int i = 0; i < 10000; i++)
	{
		for (int j = 0; j < arr[i]; j++)
			cout << i + 1<< "\n";
	}



	return 0;
}