#include <iostream>

using namespace std;



int main(void)
{
	int N;
	cin >> N;
	
	int max = -100000000;
	int firstNum;
	cin >> firstNum;
	if (max < firstNum)
		max = firstNum;

	int backNum = firstNum;
	
	for (int i = 0; i < N-1; i++)
	{
		int num;
		cin >> num;
		if (max < num)
			max = num;
		
		backNum += num;
		
		if (max < backNum)
			max = backNum;

		if (backNum < 0)
			backNum = 0;
		
	}
	


	cout << max;



	return 0;
}