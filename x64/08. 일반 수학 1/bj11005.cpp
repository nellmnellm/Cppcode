#include <iostream>
#include <string>
#include <cmath>
#include <deque>
using namespace std;

int main(void)
{
	int num; int jin;
	cin >> num >> jin;
	deque <int> que;
	if (num == 0)
		cout << 0;
	while (num != 0)
	{
		int i = 1;
		int namergi = num % (int)(pow(jin, i));
		num /= pow(jin, i);
		que.push_front(namergi);
		i++;
	};


	for (int i = 0; i < que.size(); i++)
	{
		if (que[i] < 10 && que[i] >= 0)
			cout << que[i];
		else if (que[i] >= 10)
			cout << (char)(que[i] + 55);
	}




	return 0;
}