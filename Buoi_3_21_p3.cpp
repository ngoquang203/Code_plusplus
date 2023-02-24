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
int kt(int n){
    while (n)
    {
        if(n%10==9) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    int n,dem=0;
    cin>>n;
    for(int i = 2;i<=n;++i){
       if(tn(i)&&kt(i)) ++dem;
    }
    cout<<dem<<endl;
    for(int i = 2;i<=n;++i){
       if(tn(i)&&kt(i)) cout<<i<<" ";
    }
    return 0;
}