#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	array <vector<string>, 200> arr;

	for (int i = 0; i < N; i++)
	{
		int age; string name;
		cin >> age >> name;
		arr[age - 1].push_back(name);

	}

	for (int i = 0; i < 200; i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			cout << i+1 << " "<< arr[i][j] << "\n";

		}
	}



	return 0;
}