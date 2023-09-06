/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
int a[N] , b[N];
int main()
{
    int n , k , q;
    cin >> n >> k >> q;
    for(int i = 0 ; i < n ; i++)
    {
        int l , r;
        cin >> l >> r;
        a[l]++ , a[r + 1]--;
    }

    for(int i = 1; i <= N ; i++)
    {
        a[i] = a[i - 1] + a[i];
    }

    for(int i = 1; i <= N; i++)
    {
        if(a[i] >= k)
            b[i] = 1;
        else
            b[i] = 0;
    }

    for(int i = 1 ; i <= N ; i++)
    {
        b[i] = b[i - 1] + b[i];
    }

    while(q--)
    {
        int x , y;
        cin >> x >> y;
        cout << b[y] - b[x - 1] << endl;
    }
    return 0;
}
