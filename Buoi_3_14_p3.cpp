#include <iostream>
using namespace std;
int tn(long n){
    if(n<=0) return 0;
    long a = 0;
    long m = n;
    while (n)
    {
        a = a*10+n%10;
        n/=10;
    }
    return a==m;
}
int kt(long n){
    int dem = 0;
    for(long i = 2;i<=n;++i){
        if(n%i==0){
            ++dem;
            while (n%i==0) n/=i; 
        }
    }
    return dem>=3;
}
int main(){
    long n,m;
    cin>>n>>m;
    int tam = 0;
    for(long i = n;i<=m;++i){
        if(tn(i)&&kt(i)){
            tam = 1;
            cout<<i<<" ";
        } 
    }
    if(tam==0) cout<<-1;
    return 0;
}