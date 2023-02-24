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
        vector<int64_t> c(x+y);
        int tam = 0;
        for(int i = 0;i<x;++i){
           cin>>a[i];
           c[tam++] = a[i];
        } 
        for(int i = 0;i<y;++i){
           cin>>b[i]; 
           c[tam++] = b[i];
        } 
        sort(c.begin(),c.end());
        for(int i = 0;i<x+y;++i){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
    
}