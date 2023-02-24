#include <iostream>
#include <math.h>
using namespace std;
int dem(int n){
    int tam = 0;
    while (n)
    {
        ++tam;
        n/=10;
    }
    return tam;
}
int Ams(int n){
    int m=n,sum=0,x=dem(n);
    while (n)
    {
        sum+=pow(n%10,x);
        n/=10;
    }
    if(sum==m) return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    if(Ams(n)) cout<<1;
    else cout<<0;
}