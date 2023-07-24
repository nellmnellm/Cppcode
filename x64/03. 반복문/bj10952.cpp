#include <iostream>
using namespace std;

int main(void)
{
	int A; int B;
	while (true)
	{
		cin >> A >> B;
		if (A || B)
			cout << A + B<<endl;
		else
			break;
	};
	
	return 0;
}