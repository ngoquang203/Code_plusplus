#include <iostream>
using namespace std;
unsigned long long fib[1000000] = {0};
 
void initialize_value()
{
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= 1000000; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];
}
int main(){
    initialize_value();
    int n;
    cin>>n;
    int index = 0,mt[n][n];
    int a = 0,b = n-1;
    while (a<=b)
    { 
        // canh tren
        for(int i = a;i<=b;++i){
            mt[a][i] = fib[index++];
        }
        // canh phai
        for(int i = a + 1;i<=b;++i){
            mt[i][b] = fib[index++];
        }
        // canh duoi
        for(int i = b - 1;i>=a;--i){
            mt[b][i] = fib[index++];
        }
        // canh trai
        for(int i = b - 1;i>=a+1;--i){
            mt[i][a] = fib[index++];
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