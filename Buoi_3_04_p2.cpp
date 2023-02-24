#include <iostream>
using namespace std;
int kt(int n,int p){
    int r =0;
    for(int i = p;i<=n;++i){
        int tam = i;
        while(tam%p==0){
            ++r;
            tam/=p;
        }
    }
    return r;
}
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;++i){
        long long a,b;
        cin>>a>>b;
        cout<<kt(a,b)<<endl; 
    }
}