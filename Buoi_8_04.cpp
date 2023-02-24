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
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}