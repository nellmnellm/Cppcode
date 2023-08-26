#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; int M;
	cin >> N >> M;
	vector <int> vec;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		if (i == 0)
			vec.push_back(num);
		else
			vec.push_back(num + vec[i - 1]);

	}
	for (int i = 0; i < M; i++) {
		int first, second;
		cin >> first >> second;
		if (first - 1 == 0)
			cout << vec[second - 1] << '\n';
		else
			cout << vec[second - 1] - vec[first - 2] << '\n';
	}





	return 0;
}