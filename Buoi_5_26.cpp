#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int j = 1;j<=n;++j)
    {
        int m;
        cin >> m;
        vector<int64_t> a(m);
        vector<int64_t> b(m);
        for (int i = 0; i < m; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        cout<<"Test "<<j<<":"<<endl;
        for(int i = 0;i<m;++i){
            cout<<a[i]<<" "<<b[m-i-1]<<" ";
        }
        cout<<endl;
    }
}