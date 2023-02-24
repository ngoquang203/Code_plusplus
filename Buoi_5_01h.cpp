#include <iostream>
using namespace std;
int tach(int n){
    int dem1 = 0,dem9 = 0;
    while (n)
    {
        if((n%10)==1) ++dem1;
        if((n%10)==9) ++dem9;
        if(dem1&&dem9) return 1;
        n/=10;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;++i){
        cin>>a[i];
        if(tach(a[i])) cout<<a[i]<<" ";
    }
    return 0;
}