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
        int n , m;
        cin >> n >> m;
        map<int , int> mp;
        while(n--)
        {
            int x; cin >> x;
            mp.insert({x , 1});
        }

        while(m--)
        {
            int x; cin >> x;
            if(mp.count(x))
            {
                mp[x]++;
            }
            else
            {
                mp.insert({x , 1});
            }
        }

        int cnt  = 0;
        for(auto i : mp)
        {
            if(i.second == 2)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
