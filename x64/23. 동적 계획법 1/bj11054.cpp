#include <iostream>
#include <algorithm>
using namespace std;

// 10 20 11 15 19 22 30 25 -> 5
//   1   2 2  3  4  5 6  6
int main(void)
{
	int N;
	cin >> N;

	int arr[1001] = { 0, };
	int numbering[1001] = { 0, };
	int backarr[1001] = { 0, } ;
	int backnumbering[1001] = { 0, };

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		backarr[N - 1 - i] = arr[i];
	}


	numbering[0] = 1;
	backnumbering[0] = 1;

	for (int i = 1; i < N; i++)
	{
		int maxnumj = 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i])
			{
				if (maxnumj <= numbering[j])
					maxnumj = numbering[j] + 1;
			}
		}
		numbering[i] = maxnumj;

		int maxnumreversej = 1;
		for (int j = 0; j < i; j++)
		{
			if (backarr[j] < backarr[i])
			{
				if (maxnumreversej <= backnumbering[j])
					maxnumreversej = backnumbering[j] + 1;
			}
		}
		backnumbering[i] = maxnumreversej;
	}

	int maxNum = 0;
	
	for (int i = 0; i < N; i++)
	{
		maxNum = max(maxNum, numbering[i]+backnumbering[N-1-i]);
	}


	cout << maxNum - 1;



	return 0;
}