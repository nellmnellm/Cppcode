#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string N; int F;
	cin >> N >> F;
	int newN=0;
	for (int i = 0; i < N.length(); i++)
	{
		newN *= 10;
		if (i < N.length() - 2)
			newN += (int)(N[i] - (int)'0');
	}


	while (newN % F != 0)
		newN++;
	if (newN%100 < 10)
		cout << 0;
	cout << newN % 100;


	return 0;
}

