#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; 
	cin >> s;
	getline(cin, s);

	string t;
	stack <int> stk;
	while (s != ".")
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(')
				stk.push(1);
			else if (s[i] == '[')
				stk.push(2);
			else if (s[i] == ')')
			{
				if (stk.top() == 1)
					stk.pop();
				else
				{
					t == "no";
					break;
				}
			}
			else if (s[i] == ']')
			{
				if (stk.top() == 2)
					stk.pop();
				else
				{
					t == "no";
					break;
				}
			}

			if (s[i] == '.')
				t == "yes";
		}
			

		cout << t << '\n';


		cin >> s;
	}
}
