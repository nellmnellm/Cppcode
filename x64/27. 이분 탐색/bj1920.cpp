#include <iostream>
#include <unordered_map>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	unordered_map<int, int> map;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		map[num] = 1;
	}

	int M;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		if (map[num])
			cout << map[num] << '\n';
		else
			cout << 0 <<'\n';
	}





	return 0;
}