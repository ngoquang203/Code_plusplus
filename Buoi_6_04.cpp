#include <iostream>
using namespace std;
int snt(int n){
    if(n<2) return 0;
    for(int i = 2;i*i<=n;++i){
        if(n%i==0) return 0;
    }
    return 1;
} 
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int max = 0,tam = 0,vt = 0;
    for(int i = 0;i<n;++i){
        for(int j = 0;j<m;++j){
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<m;++i){
        tam = 0;
        for(int j = 0;j<n;++j){
            if(snt(a[j][i])) ++tam;
        }
        if(tam>max){
            vt = i + 1;
            max = tam;
        }
    }
    for(int i = 0;i<n;++i){
        cout<<a[i][vt-1]<<endl;
    }
}