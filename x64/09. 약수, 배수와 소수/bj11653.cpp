#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	
	vector <int> vec;

	for (int i = 2; i <= (int)(sqrt(N) + 1); i++)
	{
		bool sosu = true;

		for (int j = 2; j<=(int)(sqrt(sqrt(N) + 1) + 1); j++)
		{
			
			if (i % j == 0 && i != j)
				sosu = false;

			if (sosu == true)
			{
				vec.push_back(i);
			}
		}
	}
	for (int i = 0; i < vec.size(); i++)
	{
		while (N % vec[i] == 0 && N != vec[i])
		{
			cout << vec[i] << endl;
			N /= vec[i];
		}

	}
	if (N != 1)
		cout << N;
	return 0;
}