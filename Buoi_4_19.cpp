#include <iostream>
using namespace std;
int sum(long long n){
    int sum1 = 0;
    while (n)
    {
        if((n%10)&1);
        else sum1+=n%10;
        n/=10;
    }
    return sum1;
}
int main(){
    long long n;
    cin>>n;
    cout<<sum(n);
}