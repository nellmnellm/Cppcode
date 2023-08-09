#include <iostream>
using namespace std;

int cnt = 0;
int arr[15]{ 0, };

void queen(int nowcol, int N) {

	if (nowcol == N)
	{
		cnt++;
		return;
	}
	for (int i = 0; i < N; i++)
	{
		bool queenpos = true;
		arr[nowcol] = i;

		for (int j = 0; j < nowcol; j++)
		{
			if (arr[j] == i || arr[j] + j == nowcol + i || arr[j] - j == i - nowcol)
			{
				queenpos = false;
				break;

			}

		}
		if (queenpos)
			queen(nowcol + 1, N);
	}
}


int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		arr[0] = i;
		queen(1, N);
	}
	cout << cnt;

	return 0;
}

