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
    for(int i = 0;i<n;++i){
        for(int j = 0;j<m;++j){
            for(int z = 0;z<j;++z){
                if(a[i][j]<a[i][z]){
                    int temp = a[i][j];
                    a[i][j] = a[i][z];
                    a[i][z] = temp;
                }
            }
        }
    }
    for(int i = 0;i<n;++i){
        for(int j = 0;j<m;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}