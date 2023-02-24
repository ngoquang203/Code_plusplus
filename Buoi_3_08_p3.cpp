#include <iostream>
#include <math.h>
using namespace std;
bool kt(long long m){
    int sum = 0;
    for(int i = 1;i<=sqrt(m);++i){
        if(m%i==0){
            sum+=i;
            if(i!=m/i) sum+=m/i;
        } 
    }
    if(sum-m==m) return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;++i){
        long long m;
        cin>>m;
        int sum = 0;
        kt(m)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}