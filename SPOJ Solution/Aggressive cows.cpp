/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 1e5 + 5;
int n , k , a[N];
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
    int c = 1;
    int p = a[1];
    for(int i = 2 ; i <= n ; i++)
    {
        if(a[i] - p >= m)
        {
            c++;
            p = a[i];
        }
    }
    return (c >= k);
}
int main()
{
    //Dwedar_On_Da_Code();
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        for(int i = 1 ; i <= n ; i++)
            cin >> a[i];
        sort(a + 1 , a + n + 1);

        int l = 0 , r = 1e9 , ans = 0;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(check(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
