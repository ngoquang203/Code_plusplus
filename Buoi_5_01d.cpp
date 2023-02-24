#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int min = INT_MAX,tam = -1;
    for(int i = 0;i<n;++i){
        cin>>a[i];
        if(min>a[i]){
            min = a[i];
            tam = i;
        } 
    }
    cout<<tam;
}