#include <iostream>
using namespace std;
void kt(long long n){
    int b[10];
    for(int i = 0;i<=9;++i){
        b[i] = 0;
    }
    while (n)
    {
        if(n%10==2) ++b[2];
        if(n%10==3) ++b[3];
        if(n%10==5) ++b[5];
        if(n%10==7) ++b[7];
        n/=10;
    }
    for(int i = 1;i<=9;++i){
        if(b[i]>=1){
            cout<<i<<" "<<b[i]<<'\n';
            b[i] = 0;
        }
    }
    
}
int main(){
    long long n;
    cin>>n;
    kt(n);
}