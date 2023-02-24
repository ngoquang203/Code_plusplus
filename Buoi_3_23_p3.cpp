#include <iostream>
using namespace std;
int kt(long long n,long long m){
    while (n!=m)
    {
        if(n>m) n-=m;
        if(n<m) m-=n;
    }
    if(n==1) return 1;
    return 0;
}
int main(){
    long long n,m;
    cin>>n>>m;
    kt(n,m)?cout<<"YES":cout<<"NO";
}