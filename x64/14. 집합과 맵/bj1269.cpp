#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a; int b;
	cin >> a >> b;
	set<int> dae;
	for (int i = 0; i < a; i++)
	{
		int n;
		cin >> n;
		dae.insert(n);
	}

	for (int i = 0; i < b; i++)
	{
		int n;
		cin >> n;
		if (dae.count(n) == 0)
			dae.insert(n);
		else
			dae.erase(n);
	}

	cout << dae.size();
	
	return 0;
}