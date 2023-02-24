#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int demc=0,deml=0;
    while(n){
        if(n%2==0) ++demc;
        else ++deml;
        n/=10;
    }
    cout<<demc<<' '<<deml;
}