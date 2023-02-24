#include <iostream>
using namespace std;
int kt(int n,int k){
    int dem = 0;
    for(int i = 2;i*i<=n;++i){
        if(n%i==0){
            while (n%i==0)
            {
                if(++dem==k) return i;
                n/=i;
            }
            
        }
    }
    if(n>0) ++dem;
    if(dem==k) return n;
    return 0;
}
int main(){
    int n,k;
    cin>>n>>k;
    if(kt(n,k)) cout<<kt(n,k);
    else cout<<-1;
    return 0;
}