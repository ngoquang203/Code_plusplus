#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;++i){
        int m,dem=0;
        cin>>m;
        for(int j = 1;j*j<=m;++j){
            if(m%j==0){
                ++dem;
                if(j!=m/j) ++dem;
            }
        }
        cout<<dem<<endl;
    }
    return 0;
}