#include <iostream>
using namespace std;

void c1(int n){
    for(int i = 2;i*i<=n;++i){
        if(n%i==0){
            int dem = 0;
            cout<<i;
            while(n%i==0){
                ++dem;
                n /= i;
            }
            cout<<"("<<dem<<")"<<" ";
        }
    }
    if(n>1) cout<<n<<"(1)"<<"\n";
    else cout<<"\n";
}
int main(){
    int a;
    cin>>a;
    for(int i = 1;i<=a;++i){
        int n;
        cin>>n;
        cout<<"#TC"<<i<<": ";
        c1(n);
    }
}