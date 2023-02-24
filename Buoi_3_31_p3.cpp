#include <iostream>
#include <math.h>
using namespace std;
long long mu(int n){
    return (long long)n*n;
}
long long kt(int n,int m){
    if(m==0) return 1;
    if(m%2==0) return mu(pow(n,m/2));
    return (long long)n*mu(pow(n,(m/2)));
}
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;++i){
        int a,b;
        cin>>a>>b; 
        cout<<kt(a,b)<<endl;
    }
    return 0;
}