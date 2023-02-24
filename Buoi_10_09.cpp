#include <bits/stdc++.h>
using namespace std;
bool comp(const int a, const int b){
   return a > b;
}
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    vector<int> c;
    vector<int> l;
    for(int i = 0;i<n;++i) {
        cin>>a[i];
    }
    for(int i = 0;i<n;++i) {
        if(a[i]%2==1){
            l.push_back(a[i]);
            b[i] = 1;
        }
        else{
            c.push_back(a[i]);
            b[i] = 0;
        }
    }
    sort(c.begin(),c.end());
    sort(l.begin(),l.end(),comp);
    int c1 = 0,l1 = 0;
    for(int i = 0;i<n;++i){
        if(a[i]%2==0) cout<<c.at(c1++)<<" ";
        else cout<<l.at(l1++)<<" ";
    }

}

