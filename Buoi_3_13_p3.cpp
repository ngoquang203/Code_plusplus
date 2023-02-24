#include <iostream>
using namespace std;
int snt(long n){
    for(long i = 2;i*i<=n;++i){
        if(n%i==0) return 0;
    }
    return n>1;
}
int kt(long n){
    long sum = 0;
    while (n)
    {
        sum+=n%10;
        n/=10;
    }
    long x1 = 0,x2 = 1,xn = 0;
    while (xn<=sum)
    {
        xn = x2 + x1;
        x1 = x2;
        x2 = xn;
        if(xn==sum) return 1;
    }
    return 0;
}
int main(){
    long n,m;
    cin>>n>>m;
    int tam = 0;
    for(long i = n;i<=m;++i){
        if(snt(i)&&kt(i)){
            tam = 1;
            cout<<i<<" ";
        } 
    }
    if(tam==0) cout<<-1;
    return 0;
}