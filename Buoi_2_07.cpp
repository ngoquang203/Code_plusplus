#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long sum = 1;
    for(int i = 2;i<=n;++i) sum+=i*i;
    cout<<sum;
}