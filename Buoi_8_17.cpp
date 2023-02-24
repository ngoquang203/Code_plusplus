#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<string> v1;
    vector<string> v2;
	string tmp1;
    string tmp2;
	string s1;
	getline(cin, s1);
    string s2;
    getline(cin,s2);
	stringstream ss1(s1);
	while (ss1 >> tmp1)
	{
		v1.push_back(tmp1);
	}
    stringstream ss2(s2);
	while (ss2 >> tmp2)
	{
		v2.push_back(tmp2);
	}
	for(int i = 0;i<v2.size();++i){
		for(int j = 0;j<v1.size();++j){
			if(v2[i]==v1[j]) v1.erase(v1.begin()+j);
		}
	}
	sort(v1.begin(),v1.end());
    for(int i = 0;i<v1.size();++i){
		if(v1[i]!=v1[i+1]) cout<<v1[i]<<" ";
	}
	return 0;
}