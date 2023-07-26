#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; int M;
	cin >> N >> M;
	map <string, int> dtbo;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		dtbo[s] = 1;
	}
	
	vector <string> vec;
	for (int i = 0; i < M; i++)
	{
		string s;
		cin >> s;
		if (dtbo[s])
			vec.push_back(s);
	}

	sort(vec.begin(), vec.end());

	cout << vec.size() << "\n";
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i]<<"\n";
	}
	return 0;
}