#include <bits/stdc++.h>
using namespace std;
int b[30001] = {0};
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]] += 1;
    }
}
int max1(int b[])
{
    int max = 0;
    for (int i = 0; i <= 30000; i++)
    {
        if (b[i] > max)
        {
            max = b[i];
        }
    }
    return max;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        nhap(a, n);
        int max = max1(b);
        for (int i = 0; i < n; i++)
        {
            if (b[a[i]] == max)
            {
                cout << a[i] << " ";
                b[a[i]] = 0;
            }
        }
        memset(b, 0, sizeof(b));
        cout << endl;
    }
    return 0;
}