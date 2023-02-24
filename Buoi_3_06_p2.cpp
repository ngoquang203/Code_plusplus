#include <iostream>
using namespace std;
int kiemtra(long long n)
{
    long long count = 0;
    for (long long i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            if ((!n && count < 2) || ++count > 3)
                return 0;
        }
    }
    return count + (n != 1) == 3;
}
int main()
{
    int T;
    cin >> T;
    int a[T], b[T];
    for (int &i : a)
    {
        cin >> i;
    }
    for (int k = 0; k < T; ++k)
    {
        int so = a[k];
        int x = kiemtra(so);
        b[k] = x == 1 ? 1 : 0;
    }
    for (int &i : b)
        cout << i << endl;
}