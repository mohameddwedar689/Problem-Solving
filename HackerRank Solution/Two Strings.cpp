/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s1 , s2;
        cin >> s1 >> s2;
        set<char> st1 , st2;
        for(char c : s1)
            st1.insert(c);
        for(char c : s2)
            st2.insert(c);
        map<char , long long> mp;

        for(auto c : st1)
        {
            mp.insert({c , 1});
        }

        for(auto c : st2)
        {
            if(mp.count(c))
            {
                mp[c]++;
            }
            else
            {
                mp.insert({c , 1});
            }
        }

        /*
        while(j < (int)st2.size())
        {
            if(mp.count(st2[j]))
            {
                mp[st2[j]]++;
            }
            else
            {
                mp.insert({st2[j] , 1});
            }
            j++;
        }
        */

        bool flag = false;
        for(auto i : mp)
        {
            if(i.second > 1)
                flag = true;
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
