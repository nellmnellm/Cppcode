#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	map <string, bool> map;

	for (int i = 0; i < N; i++)
	{
		string name; string churip;
		cin >> name >> churip;
		if (churip == "enter")
			map[name] = 1;
		else
			map[name] = 0;
	}

	for (auto it = map.rbegin(); it != map.rend(); it++)
	{
		if (map[it->first])
			cout << it->first << '\n';
	}


	
	return 0;
}