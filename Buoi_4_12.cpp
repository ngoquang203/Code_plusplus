#include <iostream>
using namespace std;
#define ll long long
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    ll n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
}