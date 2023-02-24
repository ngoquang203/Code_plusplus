#include <iostream>
using namespace std;
int b[1000001] ={0};
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    int max = 0,vt = 0;
    for(int i = 0;i<n;++i){
            ++b[a[i]];
            if(b[a[i]]>max){
                max = b[a[i]];
                vt = a[i];
            }
        
    }
    cout<<vt<<" "<<max;
}