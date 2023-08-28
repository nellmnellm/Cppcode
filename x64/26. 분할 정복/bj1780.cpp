#include <iostream>
using namespace std;





int all1 = 0;
int all0 = 0;
int allm1 = 0;
void num(int fir, int sec, int sqnum, int** arr) {

	bool allone = true;
	bool allzero = true;
	bool allmone = true;
	for (int i = fir; i < fir + sqnum; i++)
	{
		for (int j = sec; j < sec + sqnum; j++)
		{
			if (arr[i][j] != 1)
				allone = false;
			if (arr[i][j] != 0)
				allzero = false;
			if (arr[i][j] != -1)
				allmone = false;
		}
	}

	if (allone || allzero || allmone)
	{
		if (allone)
			all1++;
		else if (allzero)
			all0++;
		else
			allm1++;
	}
	else
	{
		num(fir, sec, sqnum / 3, arr);
		num(fir, sec + sqnum / 3, sqnum / 3, arr);
		num(fir, sec + 2 * sqnum / 3, sqnum / 3, arr);
		num(fir + sqnum / 3, sec, sqnum / 3, arr);
		num(fir + sqnum / 3, sec + sqnum /3, sqnum / 3, arr);
		num(fir + sqnum / 3, sec + 2 * sqnum / 3, sqnum / 3, arr);
		num(fir + 2 * sqnum / 3, sec, sqnum / 3, arr);
		num(fir + 2 * sqnum / 3, sec + sqnum /3 , sqnum / 3, arr);
		num(fir + 2 * sqnum / 3, sec + 2 * sqnum / 3, sqnum / 3, arr);
	}

};


int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;

	int** arr = new int* [N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = new int[N];
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}


	num(0, 0, N, arr);
	cout << allm1 <<'\n' <<  all0 << '\n' << all1;


	for (int i = 0; i < N; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}

