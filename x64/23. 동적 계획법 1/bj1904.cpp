#include <iostream>

using namespace std;


long long int combi(int N, int M) {
	long long sum = 1;
	for (int i = 0; i < M; i++)
		sum *= (N - i);
	for (int i=0; i<M; i++)
		sum /= (i + 1);
	return sum;
}

long long int kesan(int num) {
	long long sum = 1;
	for (int i = 1; i <= 500000; i++)
	{
		if (i <= num / 2)
			sum += combi(num - i , i);
		else
			break;
	}
	return sum;

}



int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	cout << kesan(N) % 15746;

	return 0;
}

