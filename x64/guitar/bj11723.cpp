#include <iostream>
#include <set>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	set <int> set;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string s; int num;
		cin >> s;
		if (s == "add" || s == "remove" || s == "check" || s == "toggle")
			cin >> num;


		if (s == "add")
			set.insert(num);
		else if (s == "remove")
			set.erase(num);
		else if (s == "check")
			cout << set.count(num) << '\n';
		else if (s == "toggle")
		{
			if (set.count(num))
				set.erase(num);
			else
				set.insert(num);
		}
		else if (s == "all")
		{
			for (int i = 0; i < 20; i++)
				set.insert(i + 1);
		}
		else if (s == "empty")
			set.clear();
	}
			

	return 0;
}