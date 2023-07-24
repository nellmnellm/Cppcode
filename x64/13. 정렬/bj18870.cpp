#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector <array<int, 2>> dog;
	

	for (int i = 0; i < N; i++)
	{
		int z;
		cin >> z;
		dog.push_back({ z, i });
	}
	
	int* arr = new int[dog.size()];

	sort(dog.begin(), dog.end());

	arr[dog[0][1]] = 0;
	for (int i = 1; i < dog.size(); i++)
	{
		if (dog[i - 1][0] == dog[i][0])
			arr[dog[i][1]] = arr[dog[i - 1][1]];
		else
			arr[dog[i][1]] = arr[dog[i - 1][1]] + 1;
	}

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}