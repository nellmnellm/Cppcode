#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

bool daesomusi(const string& a, const string& b)
{
	string a_lower = a;
	string b_lower = b;
	transform(a_lower.begin(), a_lower.end(), a_lower.begin(), ::tolower);
	transform(b_lower.begin(), b_lower.end(), b_lower.begin(), ::tolower);
	return a_lower <= b_lower;

}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	map <string, string> work;
	vector <string> workname;
	for (int i = 0; i < N; i++)
	{
		string s; string t;
		cin >> s >> t;
		work[s] = t;
		workname.push_back(s);
	}

	vector <string> nowwork;
	for (int i = 0; i < N; i++)
	{
		if (work[workname[i]] == "enter")
			nowwork.push_back(workname[i]);
	}

	sort(nowwork.rbegin(), nowwork.rend(), daesomusi);

	for (int i = 0; i<nowwork.size(); i++)
		cout << nowwork[i] << "\n";

	return 0;
}