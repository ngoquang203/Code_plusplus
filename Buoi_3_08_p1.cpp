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
int thuannt(int n){
    int sum = 0;
    while(n){
        sum+=n%10;
        if(snt(n%10)==0) return 0;
        n/=10;
    }
    if(snt(sum)) return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;++i){
        int x,y;
        cin>>x>>y;
        int dem = 0;
        for(int j = x;j<=y;++j){
            if(snt(j)&&thuannt(j)) ++dem;
        }
        cout<<dem<<endl;
    }
    return 0;
}