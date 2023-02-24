#include <iostream>
using namespace std;
int kt(int n){
    while (n)
    {
        if(n&1) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    cout<<kt(n);
}