#include <iostream>
#include <array>
using namespace std;

void move4direc(int x, int y, array <array<bool, 50>, 50> &boolarr, array <array<bool, 50>, 50> &flagarr, int M, int N)
{
	if (x + 1 < M && boolarr[x + 1][y] && !flagarr[x + 1][y])
	{
		flagarr[x + 1][y] = true;
		move4direc(x + 1, y, boolarr, flagarr, M, N);
	}
	if (x - 1 >= 0 && boolarr[x - 1][y] && !flagarr[x - 1][y])
	{
		flagarr[x - 1][y] = true;
		move4direc(x - 1, y, boolarr, flagarr, M, N);
	}
	if (y + 1 < N && boolarr[x][y + 1] && !flagarr[x][y + 1])
	{
		flagarr[x][y + 1] = true;
		move4direc(x, y + 1, boolarr, flagarr, M, N);
	}
	if (y - 1 >= 0 && boolarr[x][y - 1] && !flagarr[x][y-1])
	{
		flagarr[x][y - 1] = true;
		move4direc(x, y - 1, boolarr, flagarr, M, N);
	}
	return;
}
int main(void)
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		array <array<bool, 50>, 50> boolarr = { false, };
		array <array<bool, 50>, 50> flagarr = { false, };
		
		int M; int N; int K;
		cin >> M >> N >> K;
		for (int j = 0; j < K; j++)
		{
			int num1; int num2;
			cin >> num1 >> num2;
			boolarr[num1][num2] = true;
		}
		int count = 0;
		for (int j = 0; j < M; j++)
		{
			for (int k = 0; k < N; k++)
			{
				if (boolarr[j][k] && !flagarr[j][k])
				{
					move4direc(j, k, boolarr, flagarr, M, N);
					count++;
				}
				
			}
		}
	
		cout << count << '\n';
		









	}


	return 0;
}