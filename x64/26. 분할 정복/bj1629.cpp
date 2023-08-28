#include <iostream>
#include <vector>
using namespace std;


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int A, B, C;
	cin >> A >> B >> C;
	vector <long long int> vec;
	long long int fir = A % C;
	vec.push_back(fir);
	for (int i = 0; i < 31; i++)
	{
		fir = (fir * fir) % C;
		vec.push_back(fir);
	}
	int sum = 1;
	for (int i = 0; i < 32; i++)
	{
		int num = B % 2;
		if (num)
		{
			sum = (sum * vec[i]) % C;
		}
		B = B / 2;
		if (!B)
			break;
	}

	cout << sum;
	return 0;
}