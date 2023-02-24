#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<0<<" "<<1<<" ";
    long long x1 = 0, x2 = 1, xn;
    while(n!=2){
       xn = x1 + x2;
       x1 = x2;
       x2 = xn;
       cout<<x2<<" ";
       --n;
    }
    return 0;
}