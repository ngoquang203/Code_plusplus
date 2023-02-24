#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int max = 1;
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    for(int i = 0;i<n;++i){
        for(int j = i+ 1;j<n;++j){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0;i<n-1;++i){
        if(a[i]>a[i+1]) ++max;
    }
    cout<<max;
}