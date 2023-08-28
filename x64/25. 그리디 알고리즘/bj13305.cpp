#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector <int> guri;
	vector <int> yogm;

	for (int i = 0; i < N - 1; i++)
	{
		int gurinum;
		cin >> gurinum;
		guri.push_back(gurinum);
	}
	for (int i = 0; i < N; i++)
	{
		int yogmnum;
		cin >> yogmnum;
		yogm.push_back(yogmnum);
	}

	long long int minnum = 1000000000;
	long long int sum = 0;
	for (int i = 0; i < N-1; i++)
	{
		if (i == 0)
			minnum = yogm[0];
		else
		{
			if (minnum > yogm[i])
				minnum = yogm[i];
		}
		sum += minnum * guri[i];
		
	}

	cout << sum;
	return 0;
}