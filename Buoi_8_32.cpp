#include <iostream>
using namespace std;
// 1234 số chan thi day chan
bool isDigit(char c) { return '0' <= c && c <= '9'; }
int main()
{
    int n;
    cin >> n;

    long long res = 0;
    char c;
    while (!isDigit(c = getchar()));
    for (int i = 1; i <= n; ++i, c = getchar())
    {
        if ((c - '0') % 2 == 0)
        {
            res += i;
        }
    }
    cout << res;
    return 0;
}