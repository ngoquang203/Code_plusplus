#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==0){
        if(b==0){
            if(c==0){
                cout<<"INF";
            }
            else cout<<"NO";
        }
        else cout<<-c/b;
    }
    else{
        float denta = b*b - 4*a*c;
        if(denta<0){
            cout<<"NO";
        }
        else if(denta==0){
            cout<<fixed<<setprecision(2)<<-b/(float)(2*a);
        }
        else cout<<fixed<<setprecision(2)<<(float)(-b+sqrt(denta))/(float)(2*a)<<" "<<(float)(-b-sqrt(denta))/(float)(2*a);
    }
    return 0;
}