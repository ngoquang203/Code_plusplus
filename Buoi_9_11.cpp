#include <iostream>
using namespace std;
int main(){
    int n,m,tam = 0;;
    cin>>n>>m;
    int a[n],b[m],c[n+m];
    for(int i = 0;i<n;++i){
        cin>>a[i];
        c[tam++] = a[i];
    }
    for(int i = 0;i<m;++i){
        cin>>b[i];
        c[tam++] = b[i];
    }
    for(int i = 0;i<n+m;++i){
        for(int j = i+1;j<n+m;++j){
            if(c[i]>c[j]){
				swap(c[i],c[j]);
			}
        }
    }
    for(int i = 0;i<tam;++i){
        cout<<c[i]<<" ";
    }
}