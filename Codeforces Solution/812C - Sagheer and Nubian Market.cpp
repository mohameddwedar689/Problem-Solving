/*
    Author: Mohamed Dwedar
    "Truth can only be found in one place: The Code"
*/
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
using namespace std;
/*----------------Solve func()----------------*/
typedef long long ll;
typedef unsigned long long ull;
 
const int N = 100000;
int n, a[N];
ll s;
void solved()
{
    // freopen("input.txt" , "right" , stdin);
    // freopen("output.txt" , "w" , stdout);  
    scanf("%d%lld", &n, &s);
	for (int i = 0; i < n; i++)
		scanf("%d", a + i);
 
	int l = 0, r = n, m, k = 0;
	ll cost = 0;
 
	while (l <= r) {
		m = (l + r) / 2;
	
		vector<ll> v;
		for (int i = 0; i < n; i++)
			v.push_back(a[i] + (ll)(i + 1)*m);
 
		sort(v.begin(), v.end());
 
		ll c = 0;
		for (int i = 0; i < m; i++)
			c += v[i];
 
		if (c <= s) {
			k = m;
			cost = c;
			l = m + 1;
		}
		else r = m - 1;
	}
 
	printf("%d %lld\n", k, cost);
}  
/*---------------Start MAIN--------------------*/
int main()
{
    fast_io;
    solved();
    return 0;
}
/*-----------------End MAIN-----------------*/