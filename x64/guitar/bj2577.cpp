#include <iostream>
using namespace std;

int main(void) {
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	int arr[10] = { 0, };
	int mulnum = a * b * c;
	
	for (int i = 0; i < 10; i++)
	{
		int modnum = mulnum % 10;
		arr[modnum]++;
		mulnum /= 10;
		if (mulnum == 0)
			break;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << '\n';
	}


	return 0;
}