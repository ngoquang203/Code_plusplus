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
        int index = 0;
        for(int i = 0;i<s.size();++i){
            if(s[i]!=s[i+1]){
                tam+=s[i];
                tam += char(i-index+49);
                index = i+1;
            }
        }
        cout<<tam<<endl;
    }
}
