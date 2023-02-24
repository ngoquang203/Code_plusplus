#include <iostream>
using namespace std;
int gt(int n){
    int tam = 0;
    for(int i = 5;i<=n;i*=5){
        tam+=n/i;
    }
    return tam;
}
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;++i){
        int m;
        cin>>m;
        cout<<gt(m)<<endl;
    }
    return 0;
}