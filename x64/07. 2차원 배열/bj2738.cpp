#include <iostream>

using namespace std;

int main(void)
{
	int N; int M;
	cin >> N >> M;
	// 동적 2차원 배열 생성
	int** arr1 = new int* [N];
	for (int i = 0; i < N; i++)
		arr1[i] = new int[M];
	int** arr2 = new int* [N];
	for (int i = 0; i < N; i++)
		arr2[i] = new int[M];
	int** arr3 = new int* [N];
	for (int i = 0; i < N; i++)
		arr3[i] = new int[M];


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >> arr1[i][j];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >> arr2[i][j];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			arr3[i][j] = arr1[i][j] + arr2[i][j];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << arr3[i][j] << " ";

		cout << endl;
	}

	return 0;

}