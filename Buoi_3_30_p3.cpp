#include <iostream>
using namespace std;
int ucln(int n,int m){
    while (n!=m)
    {
        if(n>m) n-=m;
        if(n<m) m-=n;
    }
    return n;
}
long long bcnn(int n,int m){
    if(n%m==0) return n;
    if(m%n==0) return m;
    while (n!=m)
    {
        if(n>m) m+=n;
        if(n<m) n+=m;
    }
    return n;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<ucln(n,m)<<" "<<(long long)n*m/ucln(n,m);
}
