#include <iostream>
using namespace std;

int main(void)
{
	int N; int M;
	cin >> N >> M;
	int* arr = new int[N];
	for(int i=0; i<N; i++)
		arr[i]=0;
	for(int i=0; i<M; i++)
	{
		int a; int b; int c;		
		cin >> a >> b >> c;
		for (int j=a-1; j<=b-1; j++)
			arr[j]=c;	
	}		
	
	for(int i=0; i<N; i++)
		cout << arr[i] <<" ";
	


	return 0;
}
