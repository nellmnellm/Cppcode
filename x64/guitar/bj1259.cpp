#include <iostream>
#include <cmath>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	while (true)
	{

		int arr[6];
		int num;
		cin >> num;
		int stopNum;
		for (int i = 0; i < 6; i++)
		{
			int fullNum = (int)num / (int)pow(10, i);
			arr[i] = (fullNum) % 10;
			if (fullNum == 0)
			{
				stopNum = i;
				break;
			}
		}

		if (!stopNum)
			return 0;
		else if (stopNum != 1)
		{
			if (arr[0] == arr[stopNum - 1] && arr[1] == arr[stopNum - 2])
				cout << "yes\n";
			else
				cout << "no\n";
		}
		else
		{
			cout << "yes\n";
		}

	}
	
	
	return 0;
}