#include <iostream>
using namespace std;
int kiemtra(int n,int m){
    while (n!=m)
    {
        n>m?n-=m:m-=n;
    }
    return n==1;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = n;i<=m;++i){
        for(int j = i;j<=m;++j){
            if(kiemtra(i,j)) cout<<"("<<i<<","<<j<<")"<<endl;
        }
    }
    return 0;
}