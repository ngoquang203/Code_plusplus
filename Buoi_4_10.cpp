#include <iostream>
using namespace std;
#define ll long long
ll giaithua(int n) {
    if(n==1) return 1;
    return n*giaithua(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<giaithua(n);
}