#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],dem25 = 0,dem50 = 0,dem100 =0,tam = 0;
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    for(int i = 0;i<n;++i){
        if(a[i]==25) ++dem25;
        else if(a[i]== 50){
            --dem25;
            ++dem50;
        }
        else if(a[i]==100){
            --dem25;
            --dem50;
            ++dem100;
        }
        if(dem25<0||dem50<0){
            cout<<"NO";
            tam = 1;
            break;
        }
    }
    if(tam == 0) cout<<"YES";
    return 0;
}