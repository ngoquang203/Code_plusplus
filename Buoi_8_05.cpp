#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v;
    string tmp;
    string s;
    getline(cin, s);
    stringstream ss(s);
    while (ss >> tmp)
    {
        v.push_back(tmp);
    }
    map<string,int> m;
    for(int i = 0;i<v.size();++i){
        m.insert({v[i],0});
    }
    for(auto &&i : m){
        cout<<i.first<<" ";
    }
    return 0;
}