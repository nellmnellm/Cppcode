#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	unordered_map <int, int> nummap;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (nummap[num])
			nummap[num]++;
		else
			nummap[num] = 1;
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int num;
		cin >> num;
		if (nummap[num])
			cout << nummap[num] << " ";
		else
			cout << 0 << " ";


	}


	return 0;
}