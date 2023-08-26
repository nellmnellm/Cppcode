#include <iostream>
#include <vector>
#include <deque>
#include <array>
using namespace std;

deque <array<int, 2>> vec;
vector <array<int, 2>> goodvec;


void vecCount(int n) {
	int count = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		if (count == 0)
		{
			goodvec.push_back(vec[i]);
			count++;
		else
		{

	}
		
}

int main(void) {

	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int num1; int num2;
		cin >> num1 >> num2;
		vec.push_back({ num1, num2 });
	}

	
	int maxCount = 0;
	for (int i = 0; i < N; i++)
	{
		vecCount(i);
		maxcount < count;
	}


	return 0;
}