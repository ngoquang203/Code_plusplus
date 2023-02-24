#include <bits/stdc++.h>
using namespace std;
int a[1000001];
void sang()
{
  for (int i = 0; i <= 1000000; i++)
    a[i] = 1;
  a[0] = a[1] = 0;
  for (int i = 2; i <= 1000; i++)
  {
    if (a[i])
    {
      for (int j = i * i; j <= 1000000; j += i)
      {
        a[j] = 0;
      }
    }
  }
}
int main()
{
  sang();

  long long n;
  cin >> n;
  int cnt = 0;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (a[i])
    {
      cnt++;
    }
  }
  cout << cnt;
}