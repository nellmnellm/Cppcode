#include <iostream>
#include <iomanip> 
using namespace std;

int main(void)
{
	double num1 = 0.0;
	int num2 = 0;
	
	cin >> num1 >> num2;

	cout << fixed << setprecision(12) << num1 / num2;
	return 0;
}
