#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    if(a/b==c||b/c==a||a/c==b) cout<<"/";
    else cout<<"NOSOL";
}