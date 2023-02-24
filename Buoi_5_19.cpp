#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int m;
        cin>>m;
        long long a[m];
        for(int i = 0;i<m;++i){
            cin>>a[i];
        }
        long long tam = 0;
        for(int i = 1;i<m;++i){
            if(a[i]==a[i-1]){
                tam = 1;
                cout<<a[i]<<endl;
                break;
            }
        }
        if(tam == 0) cout<<-1<<endl;
    }
    return 0;
}