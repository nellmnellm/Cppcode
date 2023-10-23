#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector <string> vec;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		if (!vec.empty())
		{
			bool sameword = false;
			for (int j = 0; j < vec.size(); j++)
			{
				if (vec[j].length() == s.length())
				{

					for (int k = 0; k < vec[j].length(); k++)
					{
						bool truecycle = true;
						for (int l = 0; l < vec[j].length(); l++)
						{
							if (l + k < vec[j].length())
							{
								if (vec[j][l + k] != s[l])
									truecycle = false;
							}
							else
							{
								if (vec[j][l + k - vec[j].length()] != s[l])
									truecycle = false;
							}
						}
						if (truecycle)
						{
							sameword = true;
						}


					}
				}



			}
			if (!sameword)
				vec.push_back(s);
		}
		else
		{
			vec.push_back(s);
		}

	}


	std::cout << vec.size();

	return 0;
}