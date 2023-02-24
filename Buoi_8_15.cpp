#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string &s)
{
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
}
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
	for (int i = 0; i < v.size(); i++)
	{
		int tam = 0;
		for(int j = 0;j<i;++j){
			if(v[i] == v[j]){
				tam = 1;
				break;
			}
		}
		if(tam == 0) cout<<v[i]<<" ";
	}

	return 0;
}