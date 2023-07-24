#include <iostream>
using namespace std; 

int main(void)
{
	int chess[6] = { 1, 1, 2, 2, 2, 8 };
	int right_chess[6];
	for (int i = 0; i < 6; i++)
	{
		int a;
		cin >> a;
		right_chess[i] = chess[i] - a;
	}
	for (int i = 0; i < 6; i++)
		cout << right_chess[i] << " ";
	return 0;
}