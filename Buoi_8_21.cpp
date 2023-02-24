#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    if(strcmp(str1.c_str(),strstr(str2.c_str(),str1.c_str()))==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}