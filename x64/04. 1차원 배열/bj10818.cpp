#include <iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int arr[N];
	for (int i=0; i<N; i++)
		cin >> arr[i];
	
	int max; int min;
	max = arr[0];
	min = arr[0];
	for (int i=1; i<N; i++)
	{
		if (max < arr[i])
			max = arr[i];
		else if (min > arr[i])
			min = arr[i];
	}
	cout << min << " "<< max;
	return 0;
}
