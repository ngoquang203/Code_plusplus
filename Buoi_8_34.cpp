#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        vector<string> v1;
        string tmp1;
        string s1;
        getline(cin, s1);
        stringstream ss1(s1);
        while (ss1 >> tmp1)
        {
            v1.push_back(tmp1);
        }
        v1.erase(v1.begin() + 0);
        sort(v1.begin(), v1.end());
        for (int i = 0; i < v1.size(); ++i)
        {
            cout<<v1[i];
        }
        cout<<endl;
    }

    return 0;
}