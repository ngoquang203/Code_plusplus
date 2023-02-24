#include <iostream>
using namespace std;
int gt(int n){
    int tam=1;
    for(int i = 2;i<=n;++i){
        tam*=i;
    }
    return tam;
}
int strong(int n){
    int sum = 0,m=n;
    while (n)
    {
        sum+=gt(n%10);
        n/=10;
    }
    return sum==m;
}
int main(){
    int a,b; 
    cin>>a>>b; 
    int dem = 0;
    for(int i = a;i<=b;++i){
        if(strong(i)){
            ++dem;
            cout<<i<<" ";
        } 
    }
    if(dem==0) cout<<-1;
}