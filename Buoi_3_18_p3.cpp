#include <iostream>
using namespace std;
int tn(int n){
    int a = 0,m=n;
    while(n){
        a=a*10+n%10;
        n/=10;
    }
    if(a==m) return 1;
    return 0;
}
int kt1(int n){
    while (n)
    {
        if(n%10==6) return 1;
        n/=10;
    }
    return 0;
}
int kt2(int n){
    int sum = 0;
    while (n)
    {
        sum+=n%10;
        n/=10;
    }
    if(sum%10==8) return 1;
    return 0;
}
int main(){
    int n,m;
    cin>>n>>m;
    int tam = 0;
    for(int i = n;i<=m;++i){
        if(tn(i)&&kt1(i)&&kt2(i)){
            cout<<i<<" ";
            ++tam;
        }
    }
    if(tam==0) cout<<-1;
}