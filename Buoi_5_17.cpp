#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int a[n], tam = 0, vt = -1;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                if (a[i] == a[j])
                {
                    tam = 1;
                    vt = i;
                }
            }
            if (tam == 1)
                break;
        }
        if (tam == 1)
            cout << a[vt]<<endl;
        else
            cout << -1<<endl;
    }
}