#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    int mt[5]={a,b,c,d,e};
    
    for(int i = 0;i<5;++i){
        if(min1>mt[i]){ 
            min2 = min1;
            min1 = mt[i];
        }
        else if(min2>mt[i]) min2 = mt[i];
    }
    cout<<min2;
}
// cach1 :
    // int tam;
    // if(min2>b){
    //     min2 = b;
    //     if(min2<min1){
    //         tam = min1;
    //         min1 = min2;
    //         min2 = tam;
    //     }
    // }
    // if(min2>c){
    //     min2 = c;
    //     if(min2<min1){
    //         tam = min1;
    //         min1 = min2;
    //         min2 = tam;
    //     }
    // }
    // if(min2>d){
    //     min2 = d;
    //     if(min2<min1){
    //         tam = min1;
    //         min1 = min2;
    //         min2 = tam;
    //     }
    // }
    // if(min2>e){
    //     min2 = e;
    //     if(min2<min1){
    //         tam = min1;
    //         min1 = min2;
    //         min2 = tam;
    //     }
    // }