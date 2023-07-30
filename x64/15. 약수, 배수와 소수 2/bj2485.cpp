#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}


int main(void)
{
	int N;
	cin >> N;
	int min = 1000000000;
	vector<int> vec;
	for (int i=0; i<N; i++)
	{
		int c;
		cin >> c;
		if (c < min)
			min = c;
		vec.push_back(c); 
	};
	for (int i = 0; i < N; i++)
	{
		vec[i] -= min;
	}

	
	int gcdnum = gcd(vec[0], vec[1]);
	int maxnum = max(vec[0], vec[1]);
	for (int i = 2; i < N; i++)
	{
		gcdnum = gcd(gcdnum, vec[i]);
		maxnum = max(maxnum, vec[i]);

		if (i == N - 1)
			cout << ((maxnum  / gcdnum) + 1) - N;
	}


	return 0;


}