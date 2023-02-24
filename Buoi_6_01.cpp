#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int sum_hang = 0;
    for(int i = 0;i<n;++i){
        sum_hang = 0;
        for(int j = 0;j<m;++j){
            cin>>a[i][j];
            sum_hang += a[i][j];
        }
        cout<<sum_hang<<endl;
    }
}