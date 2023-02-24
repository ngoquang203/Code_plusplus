#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i = 0;i<n;++i) cin>>a[i];
    for(int i = 0;i<m;++i) cin>>b[i];
    int i = 0,j = 0,index = 0,c[n+m];
    while (i<n&&j<m)
    {
        if(a[i]<=b[j]){
            c[index++] = a[i];
            ++i;
        }
        else{
            c[index++] = b[j];
            ++j;
        }
    }
    while (i<n)
    {
        c[index++] = a[i++];
    }
    while (j<m)
    {
        c[index++] = b[j++];
    }
    
    for(int i = 0;i<n+m;++i){
        cout<<c[i]<<" ";
    }
    return 0;
}

