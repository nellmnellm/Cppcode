#include <iostream>
#include <vector>
using namespace std;

vector <int> vec;

void vectorprint(vector <int> vecto)
{
	int z = vecto.size();
	for (int i = 0; i < z; i++)
	{
		cout << vecto[i] << " ";
	}
	cout << '\n'; 
	
	
	
}

void manjok(int N, int M, vector<int>& vecto)
{

	if (M == 1)
	{
		for (int i = 0; i < N; i++)
		{
			vec.push_back(i + 1);
			vectorprint(vec);
			vec.pop_back();
		}
		vec.clear();
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			vec.push_back(i + 1);
			manjok(N, M - 1, vec);
		}
	}
}


int main(void)
{
	int N; int M;
	cin >> N >> M;
	
	manjok(N, M, vec);


	return 0;
}