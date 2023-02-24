#include <iostream>
using namespace std;
int kt(int n){
    while (n>0)
    {
        if((n%10)!=0&&(n%10)!=6&&(n%10)!=8) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    int a;
    cin>>a;
    if(kt(a)) cout<<1;
    else cout<<0;
}