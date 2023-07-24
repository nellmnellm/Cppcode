#include <iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int A[N];
	for (int i=0; i<N; i++)
		cin>>A[i];
	
	int v;
	int count=0;
	cin >> v;
	for (int j=0; j<N; j++)
	{
		if (A[j]==v) 
			count++;
	}
	cout << count;
	
	
	return 0;
}

