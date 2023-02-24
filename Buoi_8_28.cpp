#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int tam = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]==s[i+1]) ++tam;
        
    }
    cout<<tam;
    return 0;
}