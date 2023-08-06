#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


char** matrix(const int& N)
{


	char** mat;
	mat = new char* [N];
	for (int i = 0; i < N; i++)
	{
		mat[i] = new char[N];
	}
	if (N == 3)
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
	else if (N > 3)
	{
		char** submat = matrix(N / 3);

		for (int j = 0; j < N / 3; j++)
		{
			for (int k = 0; k < N / 3; k++)
			{
				mat[j][k] = submat[j][k];
				mat[j + N / 3][k] = submat[j][k];
				mat[j + 2 * N / 3][k] = submat[j][k];
				mat[j][k + N / 3] = submat[j][k];
				mat[j + N / 3][k + N / 3] = ' ';
				mat[j + 2 * N / 3][k + N / 3] = submat[j][k];
				mat[j][k + 2 * N / 3] = submat[j][k];
				mat[j + N / 3][k + 2 * N / 3] = submat[j][k];
				mat[j + 2 * N / 3][k + 2 * N / 3] = submat[j][k];
			}
		}
		for (int i = 0; i < N / 3; i++)
		{
			delete[] submat[i];
		}
		delete[] submat;
		return mat; // 메모리 초과때문에 해줘야함....
	}
}
	
	


int main(void) 
{
	
	int N;
	cin >> N;
	char ** good = matrix(N);
	
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