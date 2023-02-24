#include <iostream>
using namespace std;
int snt(int n){
    for(int i = 2;i*i<=n;++i){
        if(n%i==0) return 0;
    }
    return n>1;
}
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;++i){
        int m;
        cin>>m;
        for(int j = m;j>=2;--j){
            if(m%j==0&&snt(j)){
                cout<<j<<endl;
                break;
            }
        }
    }
    return 0;
}