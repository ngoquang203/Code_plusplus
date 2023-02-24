#include <iostream>
using namespace std;
int snt(int n){
    for(int i = 2;i*i<=n;++i){
        if(n%i==0) return 0;
    }
    return n>1;
}
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;++i){
        int x;
        cin>>x;
        for(int j = 2;j*j<=x;++j){
            if(snt(j)) cout<<j*j<<" ";
        }
        cout<<endl;
    }

}