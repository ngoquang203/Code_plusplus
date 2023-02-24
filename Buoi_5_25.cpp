#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int m;
        cin>>m;
        int a[m],c[30000];
        for(int i = 0;i<m;++i){
            cin>>a[i];
            ++c[a[i]];
        }
        int max = 0,max1 = 0,temp = 0;
        for(int i = 0;i<m;++i){
            if(c[a[i]]!=0){
                if(c[a[i]]>max){
                    max = c[a[i]];
                    temp = a[i];
                }else if(c[a[i]]>max1){
                    max1 = c[a[i]];
                }
                c[a[i]] = 0;
            }
        }
        if(max1 == max){
            for(int i = 0;i<m;++i){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else cout<<temp<<endl;
    }
    
}