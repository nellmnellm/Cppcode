#include <iostream>
using namespace std;


void merge(int arr[], int p, int q, int r)
{
	int i = p; int j = q + 1; int t = 0;
	int* tmp = new int[r-p+1];
	while (i <= q && j <= r)
	{
		if (arr[i] < arr[j])
			tmp[t++] = arr[i++];
		else
			tmp[t++] = arr[j++];
	}
	while (i <= q)
		tmp[t++] = arr[i++];
	while (j <= r)
		tmp[t++] = arr[j++];
	for (int index = 0; index < r-p+1; index++)
		arr[index] = tmp[index];
};

void merge_sort(int arr[], int p, int r) {

	if (p < r)
	{
		int q = (p + r) / 2;
		if (p < q)
			merge_sort(arr, p, q);
		if (q +1 < r)
			merge_sort(arr, q + 1, r);
		merge(arr, p, q, r);
	}
};



int main(void)
{
	int N;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		arr[i] = num;
	}

	merge_sort(arr, 0, N-1);

	for (int i = 0; i < N; i++)
		cout << arr[i];

	return 0;
}