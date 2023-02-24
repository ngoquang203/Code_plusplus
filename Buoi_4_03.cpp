#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()

const ll inf = 1e9 + 7; const int N = 1000111;
typedef pair<int, int> pii; typedef vector<int> vi;

ll powmod(ll a,ll b)
{
	ll res=1;
	while(b!=0)
	{
		if(b%2==1)
		{
			res*=a%inf;
			res%=inf;
		}
		b/=2;
		a%=inf;
		a*=a;
	}
	return res%=inf;
}
int32_t main(int32_t argc, char *argv[]) { ios_base::sync_with_stdio(false);
cin.tie(0); cout.tie(0);
    ll a,b; cin>>a>>b;
    cout<<powmod(a,b);
}