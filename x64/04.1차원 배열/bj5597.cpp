#include <iostream>
using namespace std;

int main(void)
{
	int count=0;
	int arr[30];
	for(int i=0; i<30; i++)
		arr[i]=0;
	for(int i=0; i<28; i++)
	{
		int num;
		cin >> num;
		arr[num-1]=1;	
	};		
	
	for(int i=0; i<30; i++)
		if(arr[i]==0)
			cout << i+1 << endl;
		else 
			continue;
				
	return 0;
}
