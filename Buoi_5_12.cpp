#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[1000000];
    memset(b,0,sizeof(b));
    for(int i = 0;i<n;++i){
        cin>>a[i];
        ++b[a[i]];
    }
    int max = 0,vt = 0;
    for(int i = 0;i<1000000;++i){
        if(b[i]>max){
            max = b[i];
            vt = i;
        } 
    }
    cout<<vt<<" "<<max;
}