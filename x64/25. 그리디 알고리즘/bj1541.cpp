#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string sic;
	cin >> sic;
	vector <int> sicvec;
	int firstminus = 99;
	int count = 0;
	for (int i = 0; i < sic.length(); i++)
	{
		if (sic[i] == '+')
			sicvec.push_back(i);
		else if (sic[i] == '-')
		{
			firstminus = sicvec.size();
			break;
		}
	}
	vector <int> numvec;
	int firstnum = 0;
	int endnum;
	for (int i = 0; i <= sic.length(); i++)
	{
		if (i == sic.length() || sic[i] == '+' || sic[i] == '-')
		{
			endnum = i - 1;
			if (endnum - firstnum == 0)
				numvec.push_back((int)(sic[i - 1]-'0'));
			else if (endnum - firstnum == 1)
				numvec.push_back((int)(sic[i - 1] - '0') + 10 * (int)(sic[i - 2] - '0'));
			else if (endnum - firstnum == 2)
				numvec.push_back((int)(sic[i - 1] - '0') + 10 * (int)(sic[i - 2] - '0') + 100 * (int)(sic[i-3] - '0'));
			else if (endnum - firstnum == 3)
				numvec.push_back((int)(sic[i - 1] - '0') + 10 * (int)(sic[i - 2] - '0') + 100 * (int)(sic[i - 3] - '0') + 1000 * (int)(sic[i-4]-'0')) ;
			else if (endnum - firstnum == 4)
				numvec.push_back((int)(sic[i - 1] - '0') + 10 * (int)(sic[i - 2] - '0') + 100 * (int)(sic[i - 3] - '0') + 1000 * (int)(sic[i - 4] - '0') + 10000 * (int)(sic[i-5] - '0'));

			firstnum = i + 1;
		}
	}
	int sum = 0;
	for (int i = 0; i < numvec.size(); i++) {
		if (i <= firstminus)
		{
			sum += numvec[i];
		}
		else
		{
			sum -= numvec[i];
		}

	}
	
	cout << sum;


	return 0;
}