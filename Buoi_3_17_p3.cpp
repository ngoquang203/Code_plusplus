#include <iostream>
using namespace std;
int kt(int n){
    while(n){
        if(n%10!=0&&n%10!=6&&n%10!=8){
            return 0;
        }
        n/=10;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    kt(n)?cout<<1:cout<<0;
    return 0;  
}