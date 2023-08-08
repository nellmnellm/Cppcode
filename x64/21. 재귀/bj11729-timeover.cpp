#include <iostream>
using namespace std;


void hanoi(int N, int start, int middle, int desti) {

	
	if (N == 1)
		cout << start << " " <<  desti << endl;
	else if (N == 2)
	{
		cout << start << " " << middle << endl;
		cout << start << " " << desti << endl;
		cout << middle << " " << desti << endl;
	}
	else
	{
		hanoi(N - 2, start, middle, desti);
		cout << start << " " << middle << endl;
		hanoi(N - 2, desti, start, middle);
		cout << start << " " << desti << endl;
		hanoi(N - 1, middle, start, desti);
	}
}

int count(int i)
{
	if (i == 1)
		return 1;
	if (i == 2)
		return 3;
	if (i > 2)
		return count(i - 2) * 2 + 2 + count(i - 1);
}
int main(void)
{
	int N;
	cin >> N;
	cout << count(N) << '\n';
	hanoi(N, 1, 2, 3);



	return 0;
}
