#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;++i){
        long long m;
        cin>>m;
        int sum = 0;
        while (m)
        {
            sum+=m%10;
            m/=10;
        }
        cout<<sum<<endl;
    }
    return 0;
}