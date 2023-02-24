#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    for(int i = 0;i<n/2;++i){
        cout<<i+1<<" "<<n-i<<endl;
    }
}