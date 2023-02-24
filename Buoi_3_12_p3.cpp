#include <iostream>
using namespace std;
int fibo(long long n){
    if(n==0||n==1) return 1;
    long long x1 = 0, x2 = 1, xn=0;
    while (xn<=n)
    {
       xn = x1 + x2;
       x1 = x2;
       x2 = xn;
       if(x2==n) return 1;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;++i){
        long long m;
        cin>>m;
        fibo(m)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}