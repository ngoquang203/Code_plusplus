#include <bits/stdc++.h>
using namespace std;
string chuanhoa(string s)
{
    for(int i = 0; i < s.size() ; i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
int inchu(string s,string chu){
    string str1 = chuanhoa(s);
    string str2 = chuanhoa(chu);
    return str1!=str2;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 1;i<=n;++i)
    {
        vector<string> v;
        string tmp;
        string s;
        getline(cin, s);
        string chu;
        getline(cin, chu);
        stringstream ss(s);
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
        chuanhoa(chu);
        cout<<"#Test "<<i<<": ";
        for (int i = 0; i < v.size(); ++i)
        {
            if(inchu(v[i],chu)) cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}