#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int tam = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]=='1'){
            int index = 0;
            for(int j = i+1;j<s.length();++j){
                if(s[j]=='0') ++index;
                if(j==s.length()-1&&s[j]!='1') index = 0;
            }
            tam += index;
        }
    }
    cout<<tam;
    return 0;
}