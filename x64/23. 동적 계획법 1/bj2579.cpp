#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	int arr[301] = { 0, };
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	
	for (int i = 3; i < N; i++)
	{
		if (arr[i - 2] > arr[i - 3])
			arr[i] += arr[i - 3];
		else
			arr[i] += arr[i - 2];
	}
	if (N >= 3)
	{
		if (arr[N - 2] > arr[N - 3])
			cout << sum - arr[N - 3];
		else
			cout << sum - arr[N - 2];

	}
	else
	{
		if (N == 2)
			cout << arr[0] + arr[1];
		else if (N == 1)
			cout << arr[0];
	}



	return 0;

}