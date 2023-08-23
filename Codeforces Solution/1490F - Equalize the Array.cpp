/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        map<int , int> mp , ans;
        int mine = INT_MAX;
        for(int i = 0 ; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            ans[mp[x]]++;
            mine = min(mine , n - (mp[x] * ans[mp[x]]));
        }
        cout << mine << endl;
    }
    return 0;
}
