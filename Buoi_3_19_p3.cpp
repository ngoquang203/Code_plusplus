#include <iostream>
using namespace std;
long long gt(int n){
    long long tam=1;
    for(long long i = 2;i<=n;++i){
        tam*=i;
    }
    return tam;
}
int main(){
    int n;
    cin>>n;
    cout<<gt(n);
}