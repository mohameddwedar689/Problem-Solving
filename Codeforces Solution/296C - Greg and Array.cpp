/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
long long pref[N] , q[N] ,  a[N];
int main()
{
    int n , m , k;
    cin >> n >> m >> k;

    for(int i = 1; i <= n ; i++)
        cin >> a[i];

    vector<pair<int , int>> range(m + 1);
    vector<long long> val(m + 1);
    for(int i = 1; i<= m ; i++)
    {
        int l , r , d;
        cin >> l >> r >> d;
        range[i] = make_pair(l , r);
        val[i] = d;
    }

    for(int i = 1; i <= k ; i++)
    {
        int x , y;
        cin >> x >> y;
        q[x]++;
        q[y + 1]--;
    }

    for(int i = 1; i <= m ; i++)
        q[i] += q[i - 1];

    for(int i = 1; i <= m ; i++)
        val[i] *= q[i];

    for(int i = 1; i <= m ; i++)
    {
        int l , r;
        l = range[i].first;
        r = range[i].second;
        pref[l] += val[i];
        pref[r + 1] -= val[i];
    }

    for(int i = 1; i <= n ; i++)
        pref[i] += pref[i - 1];

    for(int i = 1; i <= n ; i++)
    {
        cout << pref[i] + a[i] << " ";
    }
    cout << endl;
    return 0;
}
