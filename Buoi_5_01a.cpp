#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int max = INT_MIN, min = INT_MAX;
    for(int i = 0;i<n;++i){
        cin>>a[i];
        if(a[i]>max) max = a[i];
        if(min>a[i]) min = a[i];
    }
    cout<<max<<" "<<min;
}