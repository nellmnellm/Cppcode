#include <iostream>
#include <set>;
using namespace std;

int main(void)
{
	
	set<int> s;
	int num;
	for (int i=0; i<10; i++)
	{
		cin>>num;
		num%=42;
		s.insert(num);
	}
	int count=s.size();
	/*for(int i=0; i<s.size(); i++)
		count ++ */
	
	cout << count;
	return 0;	
}
