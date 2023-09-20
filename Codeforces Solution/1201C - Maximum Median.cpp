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
    int n , op;
    cin >> n >> op;
    vector<int> v(n);
    for(int i = 0 ; i < n;  i++) cin >> v[i];
    sort(v.begin() , v.end());
    int m = n / 2 , i;
    for(i = v[m] ; op > 0 ; i++)
    {
        while(m + 1 < n && i == v[m + 1])
        {
            m++;
        }
        op -= (m - (n / 2) + 1);
    }

    if(op == 0)
        cout << i << endl;
    else
        cout << i - 1 << endl;
    return 0;
}
