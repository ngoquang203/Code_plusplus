#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin,s);
        string tam;
        for(int i = 0;i<s.size();++i){
            if(i&1){
                for(int j = 1;j <= s[i]-48;++j){
                    tam += s[i-1];
                }
            }
        }
        cout<<tam<<endl;
    }
}
