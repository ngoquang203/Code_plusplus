#include <iostream>
using namespace std;
bool tn(long long n){
    long long a=0;
    long long m = n;
    while (n)
    {
        a = a*10+n%10;
        n/=10;
    }
    return a==m;
}
int main(){
    int n;
    cin>>n;
    for(int i =1;i<=n;++i){
        long long m;
        cin>>m;
        tn(m)?cout<<"YES\n":cout<<"NO\n";
    }
}