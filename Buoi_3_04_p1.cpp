#include <iostream>
#include <math.h>
using namespace std;
int snt(int n){
    if(n<2) return 0;
    for(int i = 2;i<=sqrt(n);++i){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;++i){
        int m;
        cin>>m;
        if(snt(m)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}