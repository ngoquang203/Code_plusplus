#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    if((n>=0&&n<11)&&(m>=0&&m<11)) cout<<pow(n,m);
    return 0;
}