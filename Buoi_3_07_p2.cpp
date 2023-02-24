#include <iostream>
using namespace std;
int snt(int n){
    for(int i = 2;i*i<=n;++i){
        if(n%i==0) return 0;
    }
    return n>1;
}
int tach(int n){
    int tam = 0;
    while (n)
    {
        tam+=n%10;
        n/=10;
    }
    return tam;
}
int kt(int n){
    int sum1 = tach(n),sum2=0;
    for(int i = 2;i*i<=n;++i){
        if(n%i==0){
            while (n%i==0)
            {
                sum2+=tach(i);
                n/=i;
            }
            
        }
    }
    if(n>1) sum2+=tach(n);
    if(sum1==sum2) return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;++i){
        int m;
        cin>>m;
        if(snt(m)==0&&kt(m)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}