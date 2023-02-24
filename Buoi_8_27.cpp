#include<bits/stdc++.h>
using namespace std;

int lis(string s){
  int lis[s.length()];
   // lis[i] : chieu dai day con tang dai nhat ket thuc tai chi so }
   for(int i=0 ;i<s.length();i++){
     lis[i] =1;
     for(int j=0 ;j<i;j++)
     {
       if(s[i] > s[j] && lis[i] < lis[j]+1) lis[i] = lis[j] +1;
     }
   }
   int res =0;
   for(int i=0;i<s .length();i++){
     if(lis[i]>res) res=lis[i];
   }
   return 26-res;
}
int main(){
  string s;
  getline(cin,s);
  cout << lis(s);
}
