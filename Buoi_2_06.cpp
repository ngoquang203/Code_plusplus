#include <iostream>
using namespace std;
int main(){
    long n;
    cin>>n;
    long long sum = 0;
    for(int i = 1;i<=n;++i) sum+=i;
    cout<<sum;
}