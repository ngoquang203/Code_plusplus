#include <iostream>
using namespace std;
int kt(long long n){
    while (n)
    {
        if(!(n&1)) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    long long n;
    cin>>n;
    cout<<kt(n);
}