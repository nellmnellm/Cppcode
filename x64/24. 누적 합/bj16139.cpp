#include <iostream>
#include <string>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; int N;
	int** arr = new int* [26];


	for (int i = 0; i < 26; i++)
	{
		arr[i] = new int[200001];
		for (int j = 0; j < 200001; j++)
		{
			arr[i][j] = 0;
		}
	}

	cin >> s >> N;

	int slen = s.length();

	for (int i = 0; i < 26; i++)
	{
		int sum = 0;
		for (int j = 0; j < slen; j++)
		{

			if ((char)(i + 97) == s[j])
			{
				sum++;
			}
			arr[i][j] = sum;
		}
	}



	for (int i = 0; i < N; i++)
	{

		char a;
		cin >> a;
		int b; int c;
		cin >> b >> c;
		if (b != 0)
			cout << arr[(int)a - 97][c] - arr[(int)a - 97][b - 1] << '\n';
		else
			cout << arr[(int)a - 97][c] << '\n';


	}


	for (int i = 0; i < 26; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}