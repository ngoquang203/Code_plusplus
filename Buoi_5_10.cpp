#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;++i){
        int m;
        cin>>m;
        int a[m],dem=0;
        for(int i = 0;i<m;++i){
            cin>>a[i];
        }
        for(int i = 0;i<m;++i){
            if(a[i]==a[i+1]) ++dem;
        }
        cout<<dem<<endl;
    }
    return 0;
}