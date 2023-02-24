#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin,s);
        map<char,int> m;
        for(int i = 0;i<s.size();++i){
            m.insert({s[i],0});
        }
        for(int i = 0;i<s.size();++i){
            ++m[s[i]];
        }
        for(auto &&i : m){
            if(i.second==1){
                cout<<i.first;
            }
        }
        cout<<endl;
    }

    return 0;
}