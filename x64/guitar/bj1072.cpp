#include <iostream>

using namespace std;


long long int portion(long long int a, long long int b)
{
    return b * 100 / a;
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int X; long long int Y;
    cin >> X >> Y;
  
    if (portion(X, Y) >= 99)
        cout << -1;
    else
    {
        double goalpoint = (double)(portion(X, Y) + 1) / 100.0;
        double goalz = (goalpoint * (double)X - (double)Y) / (1.0 - goalpoint);
        long long int firstZ = (long long int)goalz;
        while (portion(X, Y) + 1 > portion(X + firstZ, Y + firstZ))
            firstZ++;
        cout << firstZ;
    }

  
    return 0;
}

