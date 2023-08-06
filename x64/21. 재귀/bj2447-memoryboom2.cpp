#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


char** matrix(const int& N)
{
	int pow = 1;
	for (int i = 0; i < N; i++)
	{
		pow *= 3;
	}
	char** mat;
	mat = new char* [pow];
	for (int i = 0; i < pow; i++)
	{
		mat[i] = new char[pow];
	}
	if (N == 1)
	{
		mat[0][0] = '*';
		mat[0][1] = '*';
		mat[0][2] = '*';
		mat[1][0] = '*';
		mat[1][1] = ' ';
		mat[1][2] = '*';
		mat[2][0] = '*';
		mat[2][1] = '*';
		mat[2][2] = '*';
		return mat;
	}
	else if (N > 1)
	{
		for (int j = 0; j < pow / 3; j++)
		{
			for (int k = 0; k < pow / 3; k++)
			{
				mat[j][k] = matrix(N - 1)[j][k];
				mat[j + pow / 3][k] = matrix(N - 1)[j][k];
				mat[j + 2 * pow / 3][k] = matrix(N - 1)[j][k];
				mat[j][k + pow / 3] = matrix(N - 1)[j][k];
				mat[j + pow / 3][k + pow / 3] = matrix(N - 1)[j][k];
				mat[j + 2 * pow / 3][k + pow / 3] = matrix(N-1)[j][k];
				mat[j][k + 2 * pow / 3] = matrix(N-1)[j][k];
				mat[j + pow / 3][k + 2 * pow / 3] = matrix(N-1)[j][k];
				mat[j + 2 * pow / 3][k + 2 * pow / 3] = matrix(N-1)[j][k];
			}
		}

		return mat;
	}
}




int main(void)
{

	int N;
	cin >> N;
	int K = N;
	int count = 0;
	while (K != 1)
	{
		K /= 3;
		count++;
	}
	char** good = matrix(count);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << good[i][j];
		}
		cout << endl;
	}
	

	return 0;

}