#include <iostream>
using namespace std;

int main(void) {

	

	while (true)
	{
		int a;
		int b;
		int c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break; 
		
		if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
			cout << "right\n";
		else
			cout << "wrong\n";
		
	}


	//github why not push
	




	return 0;
}