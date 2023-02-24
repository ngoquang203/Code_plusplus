#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    float sum = 0;
    for(int i = 1;i<=n;++i){
        sum+=1.0/(i*2);
    }
    cout<<fixed<<setprecision(2)<<sum;
}