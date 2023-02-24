#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    int tam = 0;
    for(int i = 0;i<n;++i){
        cin>>a[i];
        if(a[i]==m) ++tam;
    }
    cout<<tam;
}