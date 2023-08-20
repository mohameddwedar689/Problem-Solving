/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    set<string> ss;
    stack<string> sss;
    deque<string> d;
    int n;
    cin >> n;
    while(n--)
    {
        cin >> s;
        sss.push(s);
    }

    while(!sss.empty())
    {
        if(ss.count(sss.top()) == 0)
            d.push_back(sss.top());
        ss.insert(sss.top());
        sss.pop();
    }

    for(auto i : d)
    {
        cout << i << endl;
    }
    return 0;
}
