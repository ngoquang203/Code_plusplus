#include<bits/stdc++.h>

using namespace std;

int TH1(string a)
{
    for(int i=0;i<a.length()-1;i++)
    {
        if(a[i]>=a[i+1])
            return 0;
    }
    return 1;
}

int TH2(string a)
{
    for(int i=1;i<a.length();i++)
    {
        if(a[i]!=a[0])
            return 0;
    }
    return 1;
}

int TH3(string a)
{
    for(int i=0;i<2;i++)
    {
        if(a[i]!=a[i+1])
            return 0;
    }
    if(a[a.length()-2]!=a[a.length()-1])
        return 0;
    return 1;
}

int TH4(string a)
{
    for(int i=0;i<a.length();i++)
    {
        if(isdigit(a[i]))
        {
            if(a[i]!='6' && a[i]!='8')
                return 0;
        }
    }
    return 1;
}
int main()
{
    int n; cin>>n;
    cin.ignore();
    while(n--)
    {
        string s; getline(cin,s);
        string a="";
        for(int i=5;i<s.length();i++)
        {
            if(isdigit(s[i]))
            {
                a+=s[i];
            }
        }
        if(TH1(a)==1 || TH2(a)==1 || TH3(a)==1 || TH4(a)==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}