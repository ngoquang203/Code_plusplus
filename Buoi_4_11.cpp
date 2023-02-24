#include <iostream>
using namespace std;
#define ll long long
void Innguoc(long long n){
    if(n){
        cout<<n%10;
        Innguoc(n/10);
    }
}
int main()
{
    ll n;
    cin >> n;
    Innguoc(n);
}