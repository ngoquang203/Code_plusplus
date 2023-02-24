#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long tich = 1;
    for(int i = 1;i*i<=n;++i){
        if(n%i==0){
            tich*=i;
            if(n/i!=i){
                tich*=n/i;
            }
        } 
    }
    cout<<tich;
}
