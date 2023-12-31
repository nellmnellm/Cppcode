#include <iostream>
using namespace std;


int arr[23][23][23];

void arrMake() {
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 23; j++)
		{
			for (int k = 0; k < 23; k++)
			{
				if (i <= 1 || j <= 1 || k <= 1)
					arr[i][j][k] = 1;
				else if (i > 21 || j > 21 || k > 21)
					arr[i][j][k] = 1048576;
				else if (i < j && j < k)
					arr[i][j][k] = arr[i][j][k - 1] + arr[i][j - 1][k - 1] - arr[i][j - 1][k];
				else
					arr[i][j][k] = arr[i - 1][j][k] + arr[i - 1][j - 1][k] + arr[i - 1][j][k - 1] - arr[i - 1][j - 1][k - 1];
			}
		}
	}
}

int w(int a, int b, int c) {
	if (a <= 0)
		a = 0;
	if (b <= 0)
		b = 0;
	if (c <= 0)
		c = 0;
	if (a > 21)
		a = 21;
	if (b > 21)
		b = 21;
	if (c > 21)
		c = 21;
	
	
	return arr[a + 1][b + 1][c + 1];
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	arrMake();
	int a; int b; int c;

	while (true)
	{
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1)
		{
			break;
		}
		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";

	}




	return 0;
}

