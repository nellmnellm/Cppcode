#include <iostream>
using namespace std;





int all1 = 0;
int all0 = 0;

void num(int fir, int sec, int sqnum, int** arr) {
	
	bool allblue = true;
	bool allwhite = true;
	for (int i = fir; i < fir + sqnum; i++)
	{
		for (int j = sec; j < sec + sqnum; j++)
		{
			if (arr[i][j] != 1)
				allblue = false;
			if (arr[i][j] != 0)
				allwhite = false;
		}
	}

	if (allblue || allwhite)
	{
		if (allblue)
			all1++;
		else
			all0++;
	}
	else
	{
		num(fir, sec, sqnum / 2, arr);
		num(fir, sec + sqnum / 2, sqnum / 2, arr);
		num(fir + sqnum / 2, sec + sqnum / 2, sqnum / 2, arr);
		num(fir + sqnum / 2, sec, sqnum / 2, arr);
	}
	
};


int main(void) {

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
	cout << all0 << '\n' << all1; 


	for (int i = 0; i < N; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}

