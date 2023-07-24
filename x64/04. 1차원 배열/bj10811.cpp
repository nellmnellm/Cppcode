#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int N; int M;
	cin >> N >> M;
	
	vector <int>arr(N); 
	
	for (int i = 0; i < N; i++)
		arr[i] = i+1;
	
	for (int i = 0; i < M; i++)
	{
		int a; int b;
		cin >> a >> b;
		/*for (int j = a; j <= b; j++)
			tmparr[a + b - j] = arr[j] ;
		for (int k = a; k <= b; k++)
			arr[a + b - k] = tmparr[a + b - k];*/
		vector <int>tmparr(N);
		
		for (int j = 0; j <= b-a; j++)
			tmparr[j]=arr[b-j-1];
		for (int j = 0; j <= b-a; j++)
			//arr[k] = tmparr[k - a];
			swap(arr[a+j-1], tmparr[j]);
		
	}
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	
	return 0;
}
