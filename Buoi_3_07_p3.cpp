#include <iostream>
#include <math.h>
using namespace std;
int cp(long long n){
    if((long long)(sqrt(n))*(long long)(sqrt(n))==n) return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;++i){
        long long m;
        cin>>m;
        cp(m)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}