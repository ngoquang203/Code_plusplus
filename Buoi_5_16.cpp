#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    int m;
    cin>>m;
    for(int i = 0;i<m;++i){
        long long x,y,sum = 0;
        cin>>x>>y; 
        for(int j = x-1;j<=y-1;++j){
            sum+=a[j];
        }
        cout<<sum<<endl;
    }
    return 0;
}