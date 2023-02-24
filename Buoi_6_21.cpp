#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int index = n*n+1,mt[n][n];
    int a = 0,b = n-1;
    while (a<=b)
    { 
        // canh tren
        for(int i = a;i<=b;++i){
            mt[a][i] = --index;
        }
        // canh phai
        for(int i = a + 1;i<=b;++i){
            mt[i][b] = --index;
        }
        // canh duoi
        for(int i = b - 1;i>=a;--i){
            mt[b][i] = --index;
        }
        // canh trai
        for(int i = b - 1;i>=a+1;--i){
            mt[i][a] = --index;
        }
        ++a; --b;
    }
    for(int i = 0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<mt[i][j]<<" ";
        }
        cout<<endl;
    }
    
}