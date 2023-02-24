#include <iostream>
using namespace std;
int main(){
    int n,m,p;
    cin>>n>>m>>p;
    int a[n][m],b[m][p],c[n][p];
    for(int i = 0;i<n;++i){
        for(int j = 0;j<m;++j){
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<m;++i){
        for(int j = 0;j<p;++j){
            cin>>b[i][j];
        }
    }
    for(int i = 0;i<n;++i){
        for(int j = 0;j<p;++j){
            int sum = 0;
            for(int z = 0;z<m;++z){
                sum += a[i][z]*b[z][j];
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    
}