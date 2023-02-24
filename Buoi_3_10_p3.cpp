#include <iostream>
#include <math.h>
using namespace std;
int snt(int n){
    for(int i = 2;i*i<=n;++i){
        if(n%i==0) return 0;
    }
    return n>1;
}
int tang(int n){
    int a = n%10;
    n/=10;
    while (n)
    {
        int x = n%10;
        if(x>=a) return 0;
        a = x;
        n/=10;
    }
    return 1;  
}
int giam(int n){
    int a = n%10;
    n/=10;
    while (n)
    {
        int x = n%10;
        if(x<=a) return 0;
        a = x;
        n/=10;
    }
    return 1;  
}
int main(){
    int n;
    cin>>n;
    int dem = 0;
    for(int i = pow(10,n-1);i<=pow(10,n);++i){
       if(snt(i)&&(giam(i)||tang(i))) ++dem;
    }
    cout<<dem;
    return 0;
}