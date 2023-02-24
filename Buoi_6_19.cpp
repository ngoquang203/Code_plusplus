#include <iostream>
using namespace std;
int main(){
    int n,m,p;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0;i<n;++i){
        for(int j = 0;j<m;++j){
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<n;++i){
        for(int j = 0;j<n;++j){
            int sum = 0;
            for(int z = 0;z<m;++z){
                sum += a[i][z]*a[j][z];
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    
}