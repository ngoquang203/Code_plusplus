#include <iostream>
using namespace std;
int snt(int n){
    for(int i = 2;i*i<=n;++i){
        if(n%i==0) return 0;
    }
    return n>1;
}
int kt(int n){
    int tam = n%10;
    n/=10;
    while (n)
    {
        if(tam<n%10) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    int dem = 0;
    for(int i =2 ;i<=n;++i){
        if(snt(i)&&kt(i)) ++dem;
    }
    cout<<dem<<endl;
    for(int i =2 ;i<=n;++i){
        if(snt(i)&&kt(i)) cout<<i<<" ";
    }
    return 0;
}