#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int max = INT_MIN;
    for(int i = 0;i<n;++i){
        cin>>a[i];
        if(a[i]>=a[i-1]||a[i]>max){
            max = a[i];
            cout<<a[i]<<" ";
        }
    }
    return 0;
}