#include <iostream>
using namespace std;
#define ll long long
int kt(ll n){
    if(n>0&&n<10) return n;
    return kt(n/10);
}
int main(){
    ll n;
    cin>>n;
    cout<<kt(n);
}