#include <iostream>
#include <math.h>
using namespace std;
int snt(int n){
    if(n<2) return 0;
    for(int i = 2;i<=sqrt(n);++i){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    long n,m;
    cin>>n>>m;
    for(long i = n;i<=m;++i){
        if(snt(i)) cout<<i<<" ";
    }
    return 0;
}