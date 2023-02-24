#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int tam = 1;
    for(int i = 1;i<=n;++i){
        sum+=i*(tam*=-1);
    }
    cout<<sum;
}