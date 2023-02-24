#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string &s)
{
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
}
int main(){
    string str;
    getline(cin,str);
    chuanhoa(str);
    vector<string> v;
	string tmp;
    stringstream ss(str);
	while (ss >> tmp)
	{
		v.push_back(tmp);
	}
    map<string,int> m;
    for(int i = 0;i<v.size();++i){
        m.insert({v[i],0});
    }
    for(int i = 0;i<v.size();++i){
        ++m[v[i]];
    }
    string vt;int max = 0;
    for(auto &&i : m){
        if(i.second>max){
            max = i.second;
            vt = i.first;
        }
    }
    cout<<vt<<" "<<max;
}