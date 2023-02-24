#include <iostream>
#include <math.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
ll bc(ll a,ll b){
    return a/gcd(a,b)*b;
}
ll kt(ll a ,ll b , ll c,ll d){
    ll tmp = bc(bc(a,b),c);
    ll res = (ll)(pow(10,d-1)+tmp-1)/tmp*tmp;
    if(res<(ll)pow(10,d)) return res;
    return -1;
}
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<kt(a,b,c,d);
}