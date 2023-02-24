#include <bits/stdc++.h>
using namespace std;
int main()
{
    string md101 = "101 A B B A D C C A B D C C A B D";
    string md102 = "102 A C C A B C D D B B  C  D  D  B  B";
    vector<string> md1;
    string tmp1;
    stringstream ss1(md101);
    while (ss1 >> tmp1)
    {
        md1.push_back(tmp1);
    }

    vector<string> md2;
    string tmp2;
    stringstream ss2(md102);
    while (ss2 >> tmp2)
    {
        md2.push_back(tmp1);
    }
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        vector<string> md3;
        string tmp3;
        string s1;
        getline(cin, s1);
        stringstream ss3(s1);
        while (ss3 >> tmp3)
        {
            md3.push_back(tmp3);
        }
        int diem101 = 0;
        int diem102 = 0;
        for(int i = 1;i<md3.size();++i){
            if(md1[i]!=md3[i]) ++diem101;
            if(md2[i]!=md3[i]) ++diem102;
        }
        if(md1[0]==md3[0]) cout<<fixed<<setprecision(2)<<1.0*10/15*(15-diem101)<<endl;
        else cout<<fixed<<setprecision(2)<<1.0*10/15*(15-diem102)<<endl;
    }
    return 0;
}