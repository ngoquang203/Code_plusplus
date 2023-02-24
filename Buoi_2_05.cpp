#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int bol = 0;
    for(int i = 0;i<n;++i){
        int tam;
        cin>>tam;
        if(tam==2021) bol = 1; 
    }
    if(bol==1) cout<<"YES";
    else cout<<"NO";
}