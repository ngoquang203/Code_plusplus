#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int max = 0;
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
    int tam = 0;
    for(int i = 0;i<n;++i){
        if(a[i]-tam>0) max += a[i]-tam++;
    }
    cout<<max;
}