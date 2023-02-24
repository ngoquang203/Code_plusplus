#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    long long r;
    cin>>r;
    cout<<fixed<<setprecision(2)<<(double)r*3.14*2<<" "<<(double)r*r*3.14;
}