#include <iostream>
using namespace std;

int main(void)
{

	long long int arr[10] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	int N;
	cin >> N;
	
	long long int new0; 
	long long int new1;  
	long long int new2; 
	long long int new3;
	long long int new4;
	long long int new5;
	long long int new6;
	long long int new7;
	long long int new8;
	long long int new9; 

	for (int i = 1; i < N; i++)
	{
		
		new0 = arr[1];
		new1 = arr[0] + arr[2];
		new2 = arr[1] + arr[3];
		new3 = arr[2] + arr[4];
		new4 = arr[3] + arr[5];
		new5 = arr[4] + arr[6];
		new6 = arr[5] + arr[7];
		new7 = arr[6] + arr[8];
		new8 = arr[7] + arr[9];
		new9 = arr[8];
		
		arr[0] = new0 % 1000000000;
		arr[1] = new1 % 1000000000;
		arr[2] = new2 % 1000000000;
		arr[3] = new3 % 1000000000;
		arr[4] = new4 % 1000000000;
		arr[5] = new5 % 1000000000;
		arr[6] = new6 % 1000000000;
		arr[7] = new7 % 1000000000;
		arr[8] = new8 % 1000000000;
		arr[9] = new9 % 1000000000;
	}
	
	
	
	
	
	
	
	cout << ( arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9]) % 1000000000;






	return 0;
}