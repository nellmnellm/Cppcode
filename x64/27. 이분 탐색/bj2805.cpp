#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; int M;
	cin >> N >> M;

	map <int, int> map;
	long long int sum = 0;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		sum += num;
		if (map[num])
			map[num]++;
		else
			map[num] = 1;
	}
	
	long long int mapsum = 0;
	int before = 0;
	for (auto it = map.begin(); it != map.end(); it++)
	{
		mapsum += (long long int) (it->first - before) * N;
		

		if (sum - M <= mapsum)
		{
			if (sum - M == mapsum)
			{
				cout << it->first;
				break;
			}
			else
			{
				if ((mapsum - (sum - M)) % N)
					cout << it->first - ((mapsum - (sum - M)) / N) - 1; 
				else
					cout << it->first - (mapsum - (sum - M)) / N;
				break;
			}
		}
		N -= map[it->first];
		before = it->first;
		
	}
	return 0;
}
