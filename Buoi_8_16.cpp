#include <bits/stdc++.h>
using namespace std;
int main()
{

	vector<string> v;
	string tmp;
	string s;
	getline(cin, s);
    string chu;
    getline(cin,chu);
	stringstream ss(s);
	while (ss >> tmp)
	{
		v.push_back(tmp);
	}
	for(int i = 0;i<v.size();++i){
        if(v[i]==chu) continue;
        cout<<v[i]<<" ";
    }

	return 0;
}