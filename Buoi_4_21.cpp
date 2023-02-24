#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long tich = 1;
    int tam = 0;
    if(n<=0) tam = 1;
    while (n)
    {
        tich*=n%10;       
        n/=10;
    }
    if(tam==0) cout<<tich;
    return 0;
}