#include <iostream>
using namespace std;
int main(){
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    float tam = (a + b +c*2 + d*3)/7;
    if(tam>=8) cout<<"GIOI";
    else if(tam>=6.5&&tam<8) cout<<"KHA";
    else if(tam>=5&&tam<6.5) cout<<"TRUNG BINH";
    else cout<<"YEU";
}