#include <iostream>
using namespace std;

int main(void)
{
	int A; int B;
	cin >> A >> B;

	while (A && B)
	{
		
		cout << A + B << endl;
		A = 0; 
		B = 0;
		cin >> A >> B;
	};
}

/*
�� ������ eof �� ���� ������ ������� ��������µ� �̻��ϰ� Ǯ����
������ ����� ������ ¤�� �Ѿ��.*/