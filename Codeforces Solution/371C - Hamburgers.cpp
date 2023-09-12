/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
ll n[3] , p[3] , x[3] , c;
void Dwedar_On_Da_Code()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
bool check(ll m)
{
    ll ans = 0;
    for(int i = 0 ; i < 3 ; i++)
    {
        ll s = m * x[i];
        if(n[i] >= s)
            continue;
        ans += (s - n[i]) * p[i];
    }

    return (ans <= c);
}
int main()
{
    //Dwedar_On_Da_Code();
    string s;
    cin >> s;
    for(int i = 0 ; i < (int)s.size() ; i++)
    {
        if(s[i] == 'B')
            x[0]++;
        else if(s[i] == 'S')
            x[1]++;
        else
            x[2]++;
    }

    for(int i = 0 ; i < 3 ; i++)
        cin >> n[i];
    for(int i = 0 ; i < 3 ; i++)
        cin >> p[i];

    cin >> c;

    ll l = 0 , r = 1e13, ans = 0;
    while(l <= r)
    {
        ll m = (l + r) / 2;
        if(check(m))
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
