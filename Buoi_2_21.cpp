#include <iostream>
#include <math.h>
using namespace std;
int sont(int n){
    if(n<2) return 0;
    for(int i = 2;i<=sqrt(n);++i){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    long long n;
    cin>>n;
    int dem = 0;
    while (n)
    {
        if(sont(n%10)) ++dem;
        n/=10;
    }
    cout<<dem;
}