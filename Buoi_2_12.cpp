#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long sum = 0;
    for(int i = 2;i<=n*2;i+=2){
        sum+=i;
    }
    cout<<sum;
}