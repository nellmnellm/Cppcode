#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	vector<array<int, 2>> vec;

	for (int i = 0; i < N; i++)
	{
		int x; int y;
		cin >> x >> y;
		vec.push_back({ x,y });
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < N; i++)
	{
		cout << vec[i][0] << " " << vec[i][1] << "\n";
	}
	return 0;
}
	
	