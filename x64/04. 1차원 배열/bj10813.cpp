#include <iostream>
using namespace std;

int main(void)
{
	int N; int M;
	cin >> N >> M;
	int arr[N];
	for(int i=0; i<N; i++)
		arr[i]=i+1;

	int A; int B; int tmp;
	for (int i=0; i<M; i++)
	{
		cin >> A >> B;
		/* &tmp = &arr[B-1];
		&arr[B-1] = &arr[A-1];
		&arr[A-1] = &tmp; */ //�̰� �Լ��� ������ �޾����� ����� 
		tmp = arr[B-1];
		arr[B-1] = arr[A-1];
		arr[A-1] = tmp;	
	}		
	
	for(int i=0; i<N; i++)
		cout << arr[i] <<" ";
	
	
	return 0;
}

