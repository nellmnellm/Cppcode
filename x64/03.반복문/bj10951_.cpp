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
이 문제는 eof 에 대한 개념을 익히라고 만들어졌는데 이상하게 풀었다
다음에 제대로 개념을 짚고 넘어가자.*/