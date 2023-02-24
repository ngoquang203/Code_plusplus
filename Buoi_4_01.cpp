#include <iostream>
using namespace std;
void he2(long long n){
    if(n){
        long long x = n%2;
        he2(n/2);
        cout<<x;
    }
}
int main()
{
    long long a;
    cin>>a;
    he2(a);
    return 0;
}