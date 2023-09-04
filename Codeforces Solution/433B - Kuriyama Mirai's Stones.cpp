/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
long long v1[N] , v2[N];
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n ; i++)
    {
        int x;
        cin >> x;
        v1[i] = v2[i] = x;
    }
    sort(v2 + 1 , v2 + n + 1);
    for(int i = 1 ; i <= n ; i++)
    {
        v1[i] += v1[i - 1];
        v2[i] += v2[i - 1];
    }

    int m;
    cin >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        int op , l , r;
        cin >> op >> l >> r;
        if(op == 1)
        {
            cout << v1[r] - v1[l - 1] << endl;
        }
        else if(op == 2)
        {
            cout << v2[r] - v2[l- 1] << endl;
        }
    }
    return 0;
}
