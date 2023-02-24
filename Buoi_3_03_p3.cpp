#include <iostream>
#include <math.h>
using namespace std;
int cp(int n){
    int m = sqrt(n);
    if(m*m==n) return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;++i){
        int a,b;
        cin>>a>>b;
        for(int j = a;j<=b;++j){
            if(cp(j)) cout<<j<<" ";
        }
        cout<<endl;
    }
}