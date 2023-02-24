#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int dem = 0;
    while (n)
    {
        ++dem;
        n/=10;
    }
    cout<<dem;
}