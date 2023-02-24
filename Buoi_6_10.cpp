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
    int n;
    cin>>n;
    int a[n][n];
    for(int i = 0;i<n;++i){
        for(int j = 0;j<n;++j){
            cin>>a[i][j];
        }
    }
    int dem = 0;
    for(int i = 0;i<n;++i){
        for(int j = 0;j<n;++j){
            if(j==i&&snt(a[i][j])){
                ++dem;
            }
            else if(j == n-i-1&&snt(a[i][j])){
                ++dem;
            }
        }
    }
    cout<<dem;
}