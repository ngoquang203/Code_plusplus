#include <iostream>
using namespace std;
long long gt(long long n){
    long long tam = 1;
    for(int i = 1;i<=n;++i){
        tam*=i;
    }
    return tam;
}
int main(){
    long long n,m;
    cin>>n>>m;
    long long x = gt(n-1)/(gt(m-1)*gt(n-m));
    cout<<x;
}