#include <iostream>
using namespace std;
int check(int n, int m)
{
    while (n != m)
    {
        if (n > m)
            n -= m;
        if (n < m)
            m -= n;
    }
    if (n == 1)
        return 1;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int dem = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            if (check(a[i], a[j]))
                ++dem;
        }
    }
    cout << dem;
    return 0;
}