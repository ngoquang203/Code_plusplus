#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0;i<n;++i){
        for(int j = 0;j<m;++j){
            cin>>a[i][j];
        }
    }
    int sum_col = 0;
    for(int i = 0;i<m;++i){
        sum_col = 0;
        for(int j = 0;j<n;++j){
            sum_col+=a[j][i];
        }
        cout<<sum_col<<endl;
    }
    
}