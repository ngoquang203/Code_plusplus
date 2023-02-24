#include <bits/stdc++.h>
using namespace std;
int chuanhoa(string s)
{
    for (int i = 0; i<=s.length(); ++i)
    {
        if ((s[i]>='a'&&s[i]<='z')||(s[i]>='!'&&s[i]<='@')) return 0;
    }
    return 1;
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
        if (chuanhoa(v[i]))
        {
            cout << v[i] << " ";
        }
        
    }
    return 0;
}