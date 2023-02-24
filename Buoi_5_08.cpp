#include <iostream>
using namespace std;
long long max(long long a ,long long b){
    return a<b?b:a;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    int index = 1,res = 0;
    for(int i = 1;i<n;++i){
        if(a[i]!=a[i-1]){
            ++index;
        }
        else{ 
            index = 1;
        }
        res = max(res,index);
    }
    cout<<res;
}