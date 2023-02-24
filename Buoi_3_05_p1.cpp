#include <iostream>
#include <math.h>
using namespace std;
int snt(int n){
    if(n<2) return 0;
    for(int i = 2;i<=sqrt(n);++i){
        if(n%i==0) return 0;
    }
    return 1;
}
int chusnt(int n){
    while (n)
    {
        if(snt(n%10)==0) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;++i){
        int dem = 0;
        int x,y;
        cin>>x>>y;
        for(int i = x;i<=y;++i){
            if(snt(i)&&chusnt(i)) ++dem;
        }
        cout<<dem<<endl;
    }
    return 0;
}