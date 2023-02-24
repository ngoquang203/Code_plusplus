#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int max1 = INT_MIN,max2 = INT_MIN;
    for(int i = 0;i<n;++i){
        cin>>a[i];
        if(max1<a[i]){
            max2 = max1;
            max1 = a[i];
        }
        else if(max2<a[i]) max2 = a[i];
    }
    cout<<max1<<" "<<max2;
    return 0;
}