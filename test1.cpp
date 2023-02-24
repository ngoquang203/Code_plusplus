#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
 
const int N = 100001;
int minPrime[N];
 
void init() {
  for (int i = 0; i < N; i++) 
    minPrime[i] = i;
}
void sieve() {
  for (int i = 2; i * i <= (N-1); i++) {
    if (minPrime[i] != i) continue;
 
    for (int j = i * i; j < N; j += i) {
      if (minPrime[j] == j) minPrime[j] = i;
    }
  }
}
 
signed main(void) {
  ios::sync_with_stdio(0); cin.tie(nullptr);
  #ifdef ziwok
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
 
  init();
  sieve();
 
  int T; cin >> T;
  while (T--) {
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
      cout << minPrime[i] << ' ';
    cout << endl;
  }
  return 0;
}