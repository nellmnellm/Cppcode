#include <iostream>
using namespace std;


int arr[9][9] = { 0, };
void numbering(int x, int y);
void makeGoodArr();

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);



	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
		}
	}

	makeGoodArr();


	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
			cout << arr[i][j] << " ";
		cout << '\n';
	}

	return 0;
}



void numbering(int x, int y)
{
	int countx = 0;
	int sumx = 0;

	for (int i = 0; i < 9; i++)
	{
		if (arr[x][i])
		{
			countx++;
			sumx += arr[x][i];
		}
	}
	if (countx == 8)
	{
		arr[x][y] = 45 - sumx;
		return;
	}

	int county = 0;
	int sumy = 0;

	for (int i = 0; i < 9; i++)
	{
		if (arr[i][y])
		{
			county++;
			sumy += arr[i][y];
		}
	}
	if (county == 8)
	{
		arr[x][y] = 45 - sumy;
		return;
	}
	int countsquare = 0;
	int sumsquare = 0;

	for (int i = (int)(x / 3) * 3; i <= (x / 3) * 3 + 2; i++)
	{
		for (int j = (y / 3) * 3; j <= (y / 3) * 3 + 2; j++)
		{
			if (arr[i][j])
			{
				countsquare++;
				sumsquare += arr[i][j];
			}
		}
	}
	if (countsquare == 8)
	{
		arr[x][y] = 45 - sumsquare;
		return;
	}
};

void makeGoodArr() {
	bool goodarr = true;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (!arr[i][j])
			{
				numbering(i, j);
				if (!arr[i][j])
				{
					goodarr = false;
				}
			}
		}
	}

	if (!goodarr)
	{
		makeGoodArr();
	}

	return;
};

