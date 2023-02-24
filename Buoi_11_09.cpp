#include <bits/stdc++.h>
using namespace std;
int kiemtra(int n){
    while (n)
    {
        int m = n%10;
        if(m%6!=0&&m%8!=0||m==0) return 0;
        n/=10;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        vector<int> v;
        int m;
        cin>>m;
        int tam = 0;
        for(int i = 1;i<=m;++i){
           for(int j = 6*pow(10,i-1);j<=9*pow(10,i-1);++j){
             if(kiemtra(j)){
                tam++;
                v.push_back(j);
             }
           }
        }
        cout<<tam<<endl;
        for(int i = 0;i<v.size();++i){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
