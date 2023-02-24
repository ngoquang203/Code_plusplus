#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int demc = 0,deml=0;
    while (n)
    {
        if((n%10)&1) ++deml;
        else ++demc;
        n/=10;
    }
    cout<<deml<<" "<<demc;
}