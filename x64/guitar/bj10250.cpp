#include <iostream>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int H; int W; int N;
		cin >> H >> W >> N;
		int front = (N % H);
		
		int	back = (N / H) + 1;

		if (!front)
		{
			front += H;
			back -= 1;
		}
		cout << front;
		if (back < 10)
			cout << 0;
		cout << back << '\n';
	}




	return 0;
}