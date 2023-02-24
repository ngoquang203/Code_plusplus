#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int m;
        cin>>m;
        if(m<3){
            cout<<"NO"<<endl;
            continue;
        }
        float a[m];
        for(int i = 0;i<m;++i){
            cin>>a[i];
        }
        int tam = 0;
        for(int i = 0;i<m;++i){
            for(int j = i;j<m;++j){
                float tam = (float)sqrt(1.0*a[i]*a[i] + 1.0*a[j]*a[j]);
                for(int z = 0;z<m;++z){
                    if(tam == a[z]){
                       tam = 1;
                    }
                }
            }
            if(tam==1){
                cout<<"YES";
                break;
            } 

        }
        if(tam==0) cout<<"NO"<<endl;
    }
    
}