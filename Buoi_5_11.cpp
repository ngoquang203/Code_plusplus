#include <iostream>
#include <string.h>
using namespace std;
int b[1000001] = {0};
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    for(int i = 0;i<n;++i){
        if(b[a[i]]==0){
            cout<<a[i]<<" ";
            ++b[a[i]];
        }
    }
    
}