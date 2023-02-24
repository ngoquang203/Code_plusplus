#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        int a[m];
        for (int i = 0; i < m; ++i)
            cin >> a[i];
        int l = 0, r = m - 1;
        int tam1 = 0;
        for (int i = 0; i < m; ++i)
        {
            for(int j = i+1;j<m;++j){
                if(a[i]>a[j]){
                    tam1 =1;
                    l = i;
                    break;
                }
            }
            if(tam1 == 1) break;
        }
        int tam2 = 0;
        for (int i = m - 1; i >= 0; --i)
        {
            for(int j = i - 1;j>=0;--j){
                if(a[i]<a[j]){
                    tam2 = 1;
                    r = i;
                    break;
                }
            }
            if(tam2 == 1) break;
        }
        cout << l + 1 << " " << r + 1 << endl;
    }
}

