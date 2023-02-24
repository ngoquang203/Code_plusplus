#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; ++i)
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
        cout<<"#Test "<<i<<": ";
        int tam = 0;
        for (int j = 0; j < v.size(); ++j)
        {
            tam = 0;
            for (int k = 0; k < j; ++k)
            {
                if (v[j] == v[k])
                {
                    cout << v[j] << endl;
                    tam = 1;
                }
            }
            if (tam == 1)
                break;
        }
        if(tam == 0) cout<<-1<<endl;
    }
    return 0;
}