#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;++i){
        int m;
        cin>>m;
        int a[m];
        for(int i = 0;i<m;++i){
            cin>>a[i];
        }
        int res = 0,cnt = 0,b[n], dem = 1;
        b[0] = 0,cnt = 1;
        for(int j = 1;j<m;++j){
            if(a[j]>a[j-1]) ++dem;
            else dem = 1;
            if(dem>res){
                res = dem;
                b[0] = j - res + 1;
                cnt = 1;
            }
            else if(res == dem){
                b[cnt] = j - res + 1;
                ++cnt;
            }
        }
        cout<<"Test "<<i+1<<":\n";
        cout<<res<<"\n";
        for(int j = 0;j<cnt;++j){
            for(int z = 0;z<res;++z){
                cout<<a[b[j]+z]<<" ";
            }
            cout<<"\n";
        }

    }
}