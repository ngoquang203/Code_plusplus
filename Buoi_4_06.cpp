#include <iostream>
using namespace std;
#define ll long long
ll sum(ll n){
    if(n==1) return 1;
    return n + sum(n-1);
}
int main(){
    ll n;
    cin>>n;
    cout<<sum(n);
}