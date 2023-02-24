#include <iostream>
#include <math.h>
using namespace std;
int snt(int n){
    for(int i = 2;i*i<=n;++i){
        if(n%i==0) return i;
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;++i){
        int x;
        cin>>x;
        for(int j = 1;j<=x;++j){
            cout<<snt(j)<<" ";
        }
        cout<<endl;
    }

}