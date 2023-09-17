/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
void Dwedar_On_Da_Code()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main()
{
    //Dwedar_On_Da_Code();
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n , k;
        cin >> n >> k;
        vector<ll> p(n);
        for(int i = 0 ; i < n ; i++) cin >> p[i];
        ll ans = 0 , sum = p[0];
        for(int i = 1; i < n ; i++)
        {
            ll val = (100 * p[i] + k - 1) / k - sum - ans;
            if(val < 1) val = 0;
            ans += val;
            sum += p[i];
        }
        cout << ans << endl;
    }
    return 0;
}
