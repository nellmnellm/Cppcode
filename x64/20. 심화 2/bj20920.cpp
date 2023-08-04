#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool prio(const string & a, const string & b)
{
	string a_string = a;
	string b_string = b;
	if (a_string.length() < b_string.length())
		return true;
	else if (a_string.length() == b_string.length())
		return a_string >= b_string;
	else
		return false;
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; int M;
	cin >> N >> M;
	map <string, int> daner;
	map <int, vector<string>> daner_count;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		if (s.length() >= M)
		{
			if (daner[s])
				daner[s]++;
			else
			{
				daner[s] = 1;
			}
		}
	}

	for (auto pair : daner)
	{
		daner_count[pair.second].push_back(pair.first);
	}
	
	for (auto pair : daner_count)
		sort(daner_count[pair.first].begin(), daner_count[pair.first].end(), prio);
	
	vector <string> vec;
	for (auto pair : daner_count)
	{
		for (int i = 0; i < pair.second.size(); i++)
			vec.push_back(pair.second[i]);
	}

	while (vec.size())
	{
		cout << vec.back() << '\n';
		vec.pop_back();
	}
	return 0;
}