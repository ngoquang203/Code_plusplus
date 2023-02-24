#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int deml = 0,demc = 0;;
    for(int i = 0;i<n;++i){
        cin>>a[i];
        if(a[i]&1) ++deml;
        else ++demc;
    }
    cout<<demc<<" "<<deml;
    return 0;
}