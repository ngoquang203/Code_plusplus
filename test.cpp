#include <bits/stdc++.h>
using namespace std;
const int SIZE = 100005;
int n, k;
int h[SIZE];
int f[SIZE];
void init_f()
{
	f[1] = 0;
	f[2] = abs(h[2] - h[1]);
	for (int i = 3; i <= n; i++)
	{
		f[i] = INT_MAX;
		for (int j = max(1, i - k); j <= i-1; j++)
		{
			f[i] = min(f[i], f[j] + abs(h[i] - h[j]));
		}
	}
}
int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; ++i)
		cin >> h[i];
	init_f();
	cout<<f[n];
}