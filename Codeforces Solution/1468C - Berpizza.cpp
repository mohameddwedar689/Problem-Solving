/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , m , idx = 1;
    cin >> n;
    set<pair<int , int>> s1 , s2;
    for(int i = 0 ; i < n ; i++)
    {
        int q;
        cin >> q;
        if(q == 1)
        {
            cin >> m;
            s1.insert({idx , m});
            s2.insert({m , -idx});
            idx++;
        }
        else if(q == 2)
        {
            auto it = s1.begin();
            cout << it->first << " ";
            s2.erase({it->second , -it->first});
            s1.erase(it);
        }
        else
        {
            auto it = s2.rbegin();
            cout << -it->second << " ";
            s1.erase({-it->second , it->first});
            s2.erase(*it);
        }
    }
    return 0;
}
