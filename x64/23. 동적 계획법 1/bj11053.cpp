#include <iostream>
#include <algorithm>
using namespace std;

// 10 20 11 15 19 22 30 25 -> 5
//   1   2 2  3  4  5 6  6
int main(void)
{
	int N;
	cin >> N;
	
	int arr[1000001];
	int numbering[1000001] = { 0, };
	
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	

	for (int i = 1; i < N; i++)
	{
		int maxnumj = 0;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i])
			{
				if (maxnumj <= numbering[j])
					maxnumj = numbering[j] + 1;
			}
		}
		numbering[i] = maxnumj;
	}

	int maxNum = 0;
	for (int i = 1; i <N ; i++)
	{
		maxNum = max(maxNum, numbering[i]);
	}
	
	
	cout << maxNum + 1;



	return 0;
}