#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	map <int,int> numpair;
	for (int i = 0; i < N; i++)
	{
		int k;
		cin >> k;
		numpair[k] = 1;
	}
	
	int M;
	cin >> M;

	vector <int> vec;
	for (int i = 0; i < M; i++)
	{
		int k;
		cin >> k;
		if (numpair[k])
			vec.push_back(1);
		else
			vec.push_back(0);
	}

	for (int i = 0; i < M; i++)
		cout << vec[i] << " ";
	return 0;
}