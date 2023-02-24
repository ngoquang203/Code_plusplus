#include <iostream>
using namespace std;
int mt1[1000001],mt2[1000001];
void snt()
{
  for (int i = 0; i <= 1000000; ++i)
  {
    mt1[i] = 1;
  }
  mt1[0] = mt1[1] = 0;
  for (int i = 2; i*i <= 1000000; ++i)
  {
    if (mt1[i])
    {
      for (int j = i * i; j <= 1000000; j += i)
      {
        mt1[j] = 0;
      }
    }
  }
}
int main(){
    snt();
    int index = 0;
    for(int i = 2;i<1000001;++i){
        if(mt1[i]){
            mt2[index++] = i;
        }
    }
    int n;
    cin>>n;
    int index1 = 0,mt[n][n];
    int a = 0,b = n-1;
    while (a<=b)
    { 
        // canh tren
        for(int i = a;i<=b;++i){
            mt[a][i] = mt2[index1++];
        }
        // canh phai
        for(int i = a + 1;i<=b;++i){
            mt[i][b] = mt2[index1++];
        }
        // canh duoi
        for(int i = b - 1;i>=a;--i){
            mt[b][i] = mt2[index1++];
        }
        // canh trai
        for(int i = b - 1;i>=a+1;--i){
            mt[i][a] = mt2[index1++];
        }
        ++a; --b;
    }
    for(int i = 0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<mt[i][j]<<" ";
        }
        cout<<endl;
    }
    
}