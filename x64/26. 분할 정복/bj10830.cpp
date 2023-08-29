#include <iostream>
#include <vector>
using namespace std;


int** matmul(int N, int** arr1, int** arr2) {
	
	int** arr = new int* [N];

	for (int i = 0; i < N; i++)
		arr[i] = new int[N];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int tmp = 0;
			for (int k = 0; k < N; k++)
			{
				tmp += (arr1[i][k] * arr2[k][j]);
			}
			arr[i][j] = tmp % 1000;
		}
	}

	return arr;

}


int main(void)
{
	int N; long long int B;
	cin >> N >> B; 
	

	int** arr = new int* [N];

	for (int i = 0; i < N; i++)
		arr[i] = new int[N];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];
	}
	
	vector <int**> vec;
	
	int** tmparr = new int* [N];

	for (int i = 0; i < N; i++)
		tmparr[i] = new int[N];






	int** alwaymat = new int* [N];
	for (int i = 0; i < N; i++)
	{
		alwaymat[i] = new int[N];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j)
				alwaymat[i][j] = 1;
			else
				alwaymat[i][j] = 0;
		}
	}

	vec.push_back(alwaymat);
	vec.push_back(arr);

	for (int i = 1; i < 37; i++)
	{
		tmparr = matmul(N, vec[i], vec[i]);
		vec.push_back(tmparr);
	}

	B *= 2;
	for (int i = 0; i <= vec.size(); i++)
	{
		if (B % 2)
		{
			tmparr = matmul(N, vec[0], vec[i]);
			vec[0] = tmparr;
		}
		B /= 2;
		if (B == 0)
			break;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << vec[0][i][j] << ' ';
		cout << '\n';
	}

	vec.clear();
	


	for (int i = 0; i < N; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;


	for (int i = 0; i < N; i++)
	{
		delete[] tmparr[i];
	}
	delete[] tmparr;

	return 0;
}