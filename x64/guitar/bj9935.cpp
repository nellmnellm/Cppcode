#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	string s; string rep;
	cin >> s >> rep;

	stack <int> pointIndex;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == rep[0])
			pointIndex.push(i);

	}
	int indexSize = pointIndex.size();

	for (int i = 0; i <indexSize ; i++)
	{
		int potop = pointIndex.top();
		bool boomWord = true;
		if (potop + rep.length() > s.length())
		{
			pointIndex.pop();
			continue;
		}

		for (int j = 1; j < rep.length(); j++)
		{
			if (s[j + potop] != rep[j])
			{
				boomWord = false;
				break;
			}
		}

		if (boomWord)
		{
			s.erase(potop, rep.length());
		}

		pointIndex.pop();
	}


	
	if (s != "")
		cout << s;
	else
		cout << "FRULA";

	return 0;
}