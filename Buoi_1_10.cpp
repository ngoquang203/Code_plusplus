#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<fixed<<setprecision(2)<<(float)n/(n+1);
}