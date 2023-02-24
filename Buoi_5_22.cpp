#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n>>m;
    vector<int64_t> a(n);
    vector<int64_t> b(m);
    for(int i=0;i<n;i++) cin >>a[i];
    for(int i=0;i<m;i++) cin>> b[i];
    sort(a.begin(),a.end());
     sort(b.begin(),b.end()); 
    int giao[min(n,m)],hop[m+n];
    int i=0,j=0,h=0,g=0;
    while(i<n&&j<m)
    {
        if(a[i]==b[j]){
            giao[g++]=a[i++];
            hop[h++]=b[j++];
        }else if (a[i]>b[j]){
            hop[h++]=b[j++];
        }else hop[h++]=a[i++];
    }
    while(i<n) hop[h++]= a[i++];
    while(j<m) hop[h++]= b[j++];
    for(int i=0;i<h;i++) cout << hop[i]<<" ";
    cout <<endl;
    for(int i=0;i<g;i++) cout << giao[i]<<" ";
}