#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        vector<int64_t> a(x);
        for(int i = 0;i<x;++i){
           cin>>a[i];
        } 
        sort(a.begin(),a.end());
        cout<<(a[x-1]-a[0]+1)-x<<endl;
    }
    
}