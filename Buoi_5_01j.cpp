#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n+2];
    a[0] = 0,a[n+1] = 0;
    for(int i = 1;i<=n;++i){
        cin>>a[i];
    }
    for(int i = 1;i<=n;++i){
        if((a[i]*a[i-1]<0)||(a[i]*a[i+1]<0)) cout<<a[i]<<" ";
    }
    return 0;
}