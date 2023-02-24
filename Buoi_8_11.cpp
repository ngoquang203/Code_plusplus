#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s)
{
    s[0] = tolower(s[0]);
    for(int i = 1; i < s.size() ; i++)
    {
        s[i] = tolower(s[i]);
    }
}
void chuanhoa2(string &s)
{
    s[0] = tolower(s[0]);
    cout<<s[0];
}
int main()
{
	int64_t t; cin >> t;
	cin.ignore();
	while (t--)
	{
		vector<string> v;
		string tmp;
		string s; getline(cin, s);
		stringstream ss(s);
		while (ss >> tmp)
		{
			v.push_back(tmp);
		}
		for(int i = 0 ;i < v.size()-1 ; i++)
		{
		    chuanhoa2(v[i]);
		}
        chuanhoa(v[v.size()-1]);
        cout<<v[v.size()-1]<<"@gmail.com";
		cout << endl;
	}
	return 0;
}