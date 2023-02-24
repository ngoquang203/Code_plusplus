#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s)
{
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size() ; i++)
    {
        s[i] = tolower(s[i]);
    }
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
		for(int i = 0 ;i < v.size() ; i++)
		{
		    chuanhoa(v[i]);
		    cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}