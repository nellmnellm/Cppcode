#include <iostream>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	long long int arr[101] = { 1, 1, 1, 2, 2, 3,  };
	for (int i = 6; i < 101; i++)
		arr[i] = arr[i - 1] + arr[i - 5];

	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;		
		cout << arr[N-1] << '\n';

	}
	




	return 0;
}