#include <iostream>
#include <math.h>
using namespace std;
int cp(int n){
    if((int)(sqrt(n))*(int)(sqrt(n))==n) return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;++i){
        int x,y;
        cin>>x>>y;
        int dem = 0;
        for(int j = x;j<=y;++j){
            if(cp(j)) ++dem;
        }
        cout<<dem<<endl;
    }
    return 0;
}