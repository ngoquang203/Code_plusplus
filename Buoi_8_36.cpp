#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    { 
        string s1;
        getline(cin, s1);
        int max = 0;
        int index = 0;
        for(int i = 0;i<s1.size();++i){
            ++index;
            if(s1[i]==s1[i+1]){
                if(max<index) max = index;
                index = 0;
            }
        }
        if(max<index) max = index;
        cout<<max<<endl;
    }
    return 0;
}