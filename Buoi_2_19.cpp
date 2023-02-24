#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int sumc = 0;
    int suml = 0;
    while (n)
    {
        int x = n%10;
        if(x%2==0) sumc+=x;
        else suml+=x;
        n/=10;
    }
    cout<<sumc<<' '<<suml;
}