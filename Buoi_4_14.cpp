#include <iostream>
#include <math.h>
using namespace std;
long long sum(int n){
    if(n==1) return -1;
    return n*pow(-1,n) + sum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}