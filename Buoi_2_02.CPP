#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dem = 0;
    for(int i = 1;i*i<=n;++i){
        if(n%i==0){
            ++dem;
            if(n/i!=i){
                ++dem;
            }
        } 
    }
    cout<<dem<<endl;
    for(int i = 1;i<=n;++i){
        if(n%i==0) cout<<i<<' ';
    }
}