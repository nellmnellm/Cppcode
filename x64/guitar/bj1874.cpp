#include <iostream>
#include <vector>
#include <stack>

using namespace std;


void printvec(vector <bool> boolvec) {
	for (int i = 0; i < boolvec.size(); i++)
	{
		if (boolvec[i] == true)
			cout << "+";
		else if (boolvec[i] == false)
			cout << "-";

		cout << '\n';
	}
}


int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector <bool> boolvec;
	vector <int> vec;
	stack <int> numstk;
	stack <int> stk;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
		numstk.push(N - i);
	}

	int k = 0;
	while (numstk.size())
	{
		
		if (numstk.size() && numstk.top() == vec[k])
		{
			boolvec.push_back(true);
			boolvec.push_back(false);
			numstk.pop();
			k++;
		}
		else if (stk.size() && stk.top() == vec[k])
		{
			boolvec.push_back(false);
			stk.pop();
			k++;
		}
		else
		{
			boolvec.push_back(true);
			stk.push(numstk.top());
			numstk.pop();
		}
	}
	bool stktrue = true;

	if (stk.size())
	{
		

		while (stk.size())
		{
			if (stk.size() && stk.top() == vec[k])
			{
				boolvec.push_back(false);
				stk.pop();
				k++;
			}
			else
			{
				stktrue = false;
				break;
			}
		}

		
	}

	if (stktrue)
		printvec(boolvec);
	else
		cout << "NO";
	
	return 0;
}