#include <iostream>
using namespace std;
void he16(long long n){
    if(n){
        long long x = n%16;
        he16(n/16);
        if(x>=0&&x<=9) cout<<x;
        else if(x==10) cout<<"A";
        else if(x==11) cout<<"B";
        else if(x==12) cout<<"C";
        else if(x==13) cout<<"D";
        else if(x==14) cout<<"E";
        else if(x==15) cout<<"F";
    }
}
int main(){
    long long n;
    cin>>n;
    he16(n);
}