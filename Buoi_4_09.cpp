#include <iostream>
using namespace std;
#define ll long long
int kt(ll n) {
    if (n >-10 && n<0) return 0;
    if(n>=0&&n<10) return 1;
    return 1 + kt(n / 10);
}
int main(){
    ll n;
    cin>>n;
    cout<<kt(n);
}