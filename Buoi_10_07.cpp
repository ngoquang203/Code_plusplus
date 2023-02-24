#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[10]; memset(b,0,sizeof(b));
    for(int i = 0;i<n;++i){
        cin>>a[i];
        while(a[i]){
            ++b[a[i]%10];
            a[i]/=10;
        }
    }
    for(int i = 0;i<10;++i){
        if(b[i]>0) cout<<i<<" ";
    }
}