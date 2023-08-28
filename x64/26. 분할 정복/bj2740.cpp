#include <iostream>
using namespace std;



int main(void) {

	int N; int M;
	cin >> N >> M;
	int arr1[100][100] = { 0 };
	int arr2[100][100] = { 0 };



	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <M ; j++)
		{
			cin >> arr1[i][j];
		}
	}

	int K;
	cin >> M >> K;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < K; j++)
		{
			cin >> arr2[i][j];
		}
	}



	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			int sum = 0;
			for (int k = 0; k < M; k++)
			{
				
				sum += arr1[i][k] * arr2[k][j];
			}
			cout << sum << ' ';
		}
		cout << "\n";
	}

	
	
	return 0;
}