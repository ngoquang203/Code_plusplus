#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    getline(cin, s);
    long long max = 0, res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
        {
            res = res * 10 + s[i] - '0';
        }
        else
        {
            if (res > max)
                max = res;
            res = 0;
        }
    }
    if (isdigit(s[s.size() - 1]))
    {
        if (res > max)
            max = res;
    }
    cout << max << endl;

    return 0;
}