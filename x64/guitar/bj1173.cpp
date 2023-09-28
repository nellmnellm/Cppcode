#include <iostream>
using namespace std;

int main(void) {

	int N; int m; int M; int T; int R;
	cin >> N >> m >> M >> T >> R;

	int gauge = M - m;
	int count = 0;

	if (gauge < T)
	{
		cout << -1;
		return 0;
	}


	int Ddahhk = m;
	int undong = 0;
	while (true)
	{
		if (Ddahhk + T <= M)
		{
			Ddahhk += T;
			undong++;
			count++;
		}
		else
		{
			Ddahhk -= R;
			if (Ddahhk < m)
				Ddahhk = m;
			count++;
		}
		
		if (undong == N)
			break;

	}

	cout << count;



	return 0;
}