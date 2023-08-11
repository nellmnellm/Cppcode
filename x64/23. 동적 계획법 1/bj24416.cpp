#include <iostream>
#include <vector>
using namespace std;



int main(void) {
	vector <int> fibo;
	int N;
	cin >> N;

	int arr[50] = { 1, 2, };
	for (int i = 2; i < 48; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	cout << arr[(N - 2)] << ' ' << N - 2;




	return 0;
}