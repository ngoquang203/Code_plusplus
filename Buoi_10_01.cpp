#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int x,y;
        cin>>x>>y;
        vector<int64_t> a(x);
        vector<int64_t> b(y);
        for(int i = 0;i<x;++i) cin>>a[i];
        for(int i = 0;i<y;++i) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        cout<<a[x-1]*b[0]<<endl;
    }
    
}