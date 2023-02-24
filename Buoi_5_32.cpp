#include <iostream>
using namespace std;
long long maxvl(long long n)
{
    if (n == 0)
        return 0;
    if (n % 10 == 5)
        n = (n / 10) * 10 + 6;
    return maxvl(n / 10) * 10 + n % 10;
}
long long minvl(long long n)
{

    if (n == 0)
        return 0;
    if (n % 10 == 6)
        n = (n / 10) * 10 + 5;
    return minvl(n / 10) * 10 + n % 10;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x1, x2;
        cin >> x1 >> x2;
        cout << minvl(x1) + minvl(x2) << " " << maxvl(x1) + maxvl(x2) << " \n";
    }
    return 0;
}