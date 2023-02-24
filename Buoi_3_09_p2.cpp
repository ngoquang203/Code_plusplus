#include <iostream>
using namespace std;
int snt(int n){
    for(int i = 2;i*i<=n;++i){
        if(n%i==0) return 0;
    }
    return n>1;
}
int kt(int n){
    for(int i = 2;i*i<=n;++i){
        if(n%(i*i)==0&&snt(i)) return 1;
    }
    return 0;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = n;i<=m;++i){
        if(kt(i)) cout<<i<<" ";
    }
    return 0;

}