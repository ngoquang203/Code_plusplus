#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    map<int,int> m;
    for (int i = 0; i < n; ++i)
    {
        m.insert({a[i],0});
    }
    for (int i = 0; i < n; ++i)
    {
        ++m[a[i]];
    }
    for(auto &&i : m){
        for(int j = 0;j<i.second;++j){
            cout<<i.first<<" ";
        }
    }
}