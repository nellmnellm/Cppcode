#include <iostream>
#include <cmath>
using namespace std;


void hanoi(int N, int start, int middle, int desti) {


	if (N == 1)
		cout << start << " " << desti << '\n';
	else
	{
		hanoi(N - 1, start, desti, middle);
		cout << start << " " << desti << '\n';
		hanoi(N - 1, middle, start, desti);
	}
	
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	cout << (int) pow(2,N)-1 << '\n';
	hanoi(N, 1, 2, 3);



	return 0;
}
