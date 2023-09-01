#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		int count = 0;
		int score = 0;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == 'O')
			{
				count++;
			}
			else
			{
				count = 0;
			}
			score += count;
			
		}
		cout << score << '\n';
		
	}


	




	return 0;
}