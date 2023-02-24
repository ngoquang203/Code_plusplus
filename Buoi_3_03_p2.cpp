#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int m;
        cin>>m;
        int dem = 0;
        for(int i = 2;i*i<=m;++i){
            if(m%i==0){
                ++dem;
                while (m%i==0)
                {
                    m/=i;
                }
            }
        }
        if(m>1) ++dem;
        cout<<dem<<endl;
    }
    
}