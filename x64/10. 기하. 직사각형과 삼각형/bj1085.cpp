#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int x; int y; int w; int h;
	cin >> x >> y >> w >> h;
	vector <int> vec;
	vec.push_back(x);
	vec.push_back(y);
	vec.push_back(w - x);
	vec.push_back(h - y);
	int min = *min_element(vec.begin(), vec.end());
	cout << min;

	return 0;
}