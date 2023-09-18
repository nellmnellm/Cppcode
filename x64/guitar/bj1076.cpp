#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;




int main(void) {
	
	unordered_map <string, int> map;

	map["black"] = 0;
	map["brown"] = 1;
	map["red"] = 2;
	map["orange"] = 3;
	map["yellow"] = 4;
	map["green"] = 5;
	map["blue"] = 6;
	map["violet"] = 7;
	map["grey"] = 8;
	map["white"] = 9;

	string s, t, u;
	cin >> s >> t >> u;
	cout << (long long int)(map[s] * 10 + map[t])* (long long int)pow(10, map[u]);





	return 0;
}