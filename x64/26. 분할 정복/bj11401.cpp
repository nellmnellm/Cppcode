#include <iostream>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N; int K;
	cin >> N >> K;
	if (N / 2 < K)
		K = N - K;


	int* arr = new int[K];
	for (int i = 0; i < K; i++)
	{
		arr[i] = N - i;
		
	}

	for (int i = 0; i < K; i++)
	{

	}


//��ⷯ ���� ������ ������ �� �ٽ� �ð�.

	return 0;
}