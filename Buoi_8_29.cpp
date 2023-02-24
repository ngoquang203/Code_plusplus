#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s1 = "hello";
    getline(cin, s);
    int tam = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]==s1[tam]) ++tam;
        if(tam==5) break;
    }
    if(tam==5) cout<<"YES";
    else cout<<"NO";
    return 0;
}