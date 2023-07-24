#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	array <vector<string>, 50> arr;

	for (int i = 0; i < N; i++)
	{
		string S;
		cin >> S;
		int slen = S.length();
		arr[slen - 1].push_back(S);
		
	}

	for (int i = 0; i < 50; i++)
	{
		sort(arr[i].begin(), arr[i].end());
		arr[i].erase(unique(arr[i].begin(), arr[i].end()),arr[i].end());

		for (int j=0; j<arr[i].size(); j++)
		{
			cout << arr[i][j] << "\n";
			
		}
	}



	return 0;
}