#include <iostream>
using namespace std;
void kt(long long n){
    int b[10];
    for(int i = 0;i<=9;++i){
        b[i] = 0;
    }
    long long m = n;
    while (n)
    {
        if(n%10==2) ++b[2];
        if(n%10==3) ++b[3];
        if(n%10==5) ++b[5];
        if(n%10==7) ++b[7];
        n/=10;
    }
    long long a = 0;
    while (m)
    {
        a = a*10 + m%10;
        m/=10;
    }
    while (a)
    {
        if(b[a%10]!=0){
            cout<<a%10<<" "<<b[a%10]<<endl;
            b[a%10] = 0;
        } 
        a/=10;
    }
    
    
}
int main(){
    long long n;
    cin>>n;
    kt(n);
}