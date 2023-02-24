#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int m;
        cin>>m;
        int a[m];
        for(int i = 0;i<m;++i){
            cin>>a[i];
        }
        sort(a,a+m);
        int tam =1;
        for(int i = 1;i<m;++i){
            if(a[i-1]!=a[i]) ++tam;
        }
        cout<<tam<<endl;
    }
    
}