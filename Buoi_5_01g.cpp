#include <iostream>
using namespace std;
int tach(int n){
    while (n)
    {
        if((n%10)%2==0) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    int a[n],deml = 0;
    for(int i = 0;i<n;++i){
        cin>>a[i];
        if(tach(a[i])) ++deml;
    }
    cout<<deml<<endl;
    for(int i = 0;i<n;++i){
        if(tach(a[i])) cout<<a[i]<<" ";
    }
    return 0;
}