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
        int mt[123] = {0};
        int tam = 0;
        if(s[0]=='0') tam = 2;
        for(int i = 0;i<s.size();++i){
            ++mt[s[i]];
            if(isalpha(s[i])){
                tam = 2;
                break;
            }
        }
        for(int i = 48;i<=57;++i){
            if(mt[i]==0&&tam == 0){
                tam = 1;
            }
        }
        if(tam == 0 ) cout<<"YES"<<endl;
        else if(tam == 1) cout<<"NO"<<endl;
        else cout<<"INVALID"<<endl;
    }
}
