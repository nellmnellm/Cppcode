#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	map <string, int> dance;
	dance["ChongChong"] = 1;

	for (int i = 0; i < N; i++)
	{
		string name1, name2;
		cin >> name1 >> name2;
		if (dance[name1] == 1 || dance[name2] == 1)
		{
			dance[name1] = 1;
			dance[name2] = 1;
		}
	}

	int count = 0;

	for (auto pair : dance)
	{
		if (dance[pair.first] == 1)
			count++;
	}


	cout << count;


	return 0;
}
