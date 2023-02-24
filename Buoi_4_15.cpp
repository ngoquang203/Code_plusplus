#include <iostream>
#include <iomanip>
using namespace std;
// float sum(int n){
//     if(n==1) return 1;
//     return 1.0/n + sum(n-1);
// }
float sum1(int n){
    float sum = 0;
    for(int i = 1;i<=n;++i){
        sum+=1.0/i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<fixed<<setprecision(2)<<sum1(n);
}