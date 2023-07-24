#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
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
	int n;
	cin >> n;
	map <string, string> work;
	vector <string> name;
	vector <string> work_name;
	for (int i = 0; i < n; i++)
	{
		string s; string t;
		cin >> s >> t;
		work[s] = t;	
		name.push_back(s);
	}

	for (int i = 0; i < name.size(); i++)
	{
		if (work[name[i]] == "enter")
			work_name.push_back(name[i]);
	}

	sort(work_name.begin(), work_name.end(), daesomusi);
	for (int i = work_name.size()-1; i >= 0; i--)
	{
		cout << work_name[i] << "\n";
	}
	
	


	return 0;
}