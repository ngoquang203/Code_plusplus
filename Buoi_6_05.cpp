#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int sum_row = 0,max_row = 0,row = 0;
    for(int i = 0;i<n;++i){
        sum_row = 0;
        for(int j = 0;j<m;++j){
            cin>>a[i][j];
            sum_row += a[i][j];
        }
        if(sum_row>max_row){
            max_row = sum_row;
            row = i;
        }
    }
    int sum_col = 0,max_col = 0,col = 0;
    for(int i = 0;i<m;++i){
        sum_col = 0;
        for(int j = 0;j<n;++j){
            sum_col += a[j][i];
        }
        if(sum_col>max_col){
            max_col = sum_col;
            col = i;
        }
    }
    for(int i = 0;i<n;++i){
        for(int j = 0;j<m;++j){
            if(i!=row&&j!=col) cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}