#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b>c)&&(b+c>a)&&(a+c>b)){
        if(a==b||b==c||a==c){
            if(a==b&&b==c) cout<<1;
            else cout<<2;
        }
        else if((a==sqrt(b*b+c*c))||(b==sqrt(a*a+c*c))||(c==sqrt(b*b+a*a))) cout<<3;
        else cout<<4;
    }
    else cout<<"INVALID";
}