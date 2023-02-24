#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    int c[100000],d[100000],tam = 0;
    memset(c,0,sizeof(c));
    memset(d,0,sizeof(c));
    for(int i = 0;i<n;++i){
        cin>>a[i];
        ++c[a[i]];
    }
    for(int i = 0;i<m;++i){
        cin>>b[i];
        ++d[b[i]];
    }
    for(int i = 1;i<100000;++i){
        if(d[i]>0){
            for(int j = i+1;j<100000;++j){
                if(c[j]>0&&d[i]>0){
                    ++tam;
                    --c[i];
                    --d[j];
                    cout<<i<<" "<<j<<endl;
                    break;
                }
            }
        }
    }
}