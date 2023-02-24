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
    int x,y;
    cin>>x>>y;
    for(int i = 0;i<n;++i){
        for(int j = 0;j<m;++j){
            if(i==x-1){
                cout<<a[y-1][j]<<" ";
            }
            else if(i == y-1){
                cout<<a[x-1][j]<<" ";
            }
            else cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}