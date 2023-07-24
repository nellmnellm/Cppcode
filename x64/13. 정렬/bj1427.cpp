#include <iostream>
#include <cmath>
#include <array>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	array <int, 10> arr = { 0, };
	int N;
	cin >> N;
	for (int i = 0; N / (int)pow(10, i) != 0; i++)
	{
		arr[(N / (int)pow(10, i)) % 10]++;
	}

	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < arr[i]; j++)
			cout << i;
	}
	return 0;
}