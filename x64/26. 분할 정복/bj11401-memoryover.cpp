#include <iostream>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N; int K;
	cin >> N >> K;
	if (N / 2 < K)
		K = N - K;
	
	long long int* arr = new long long int[N - K + 1] ;
	for (int i = 0; i < N - K + 1; i++)
	{
		arr[i] = 1;
	}


	for (int j = 0; j < K; j++)
	{
		for (int i = 0; i < N - K; i++)
		{
			arr[i + 1] = ((long long int)arr[i] + (long long int)arr[i + 1]) % 1000000007;
		}
	}

	cout << arr[N - K];

	delete[] arr;
	return 0;
}
/*1 1     
1 2 1	
1 3 3 1  
1 4 6 4 1 
1 5 10105 1
1 6 1520156 1
1 7 213535217 1

NC0의 누적합은 N1 = 1 2 3 4 5
NC1의 누적합은 N2 = 1 3 6 10 15 
NC2의 누적합은 N3 = 1 4 10 20 35
	  1 5 15 35
	   1  6 21 */