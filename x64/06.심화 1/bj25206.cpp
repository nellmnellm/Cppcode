#include <iostream>
using namespace std;

int main(void)
{	
	double hab = 0;
	double hacsum = 0;
	

	for (int i=0; i<20; i++)
	{
	
		string subj;
		double hac;
		string score;

		cin >> subj >> hac >> score;
		hacsum += hac;
		if (score == "A+")
			hab += hac * 4.5;
		else if (score == "A0")
			hab += hac * 4.0;
		else if (score == "B+")
			hab += hac * 3.5;
		else if (score == "B0")
			hab += hac * 3.0;
		else if (score == "C+")
			hab += hac * 2.5;
		else if (score == "C0")
			hab += hac * 2.0;
		else if (score == "D+")
			hab += hac * 1.5;
		else if (score == "D0")
			hab += hac * 1.0;
		else if (score == "F")
			hab += hac * 0;
		else if (score == "P")
			hacsum -= hac;
	}
	cout <<	hab / hacsum;
	return 0;

}