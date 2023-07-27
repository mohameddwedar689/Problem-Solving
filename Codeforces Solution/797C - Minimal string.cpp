/*
    Author: Mohamed Dwedar
    "Truth can only be found in one place: The Code"
*/
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
using namespace std;
/*----------------Solve func()----------------*/
void solved()
{
    // freopen("input.txt" , "r" , stdin);
    // freopen("output.txt" , "w" , stdout);
    string s , res;
    cin >> s;
    int n = s.length();
    char mini[1000001];
    stack<char> t;
    mini[n] = 'z';
    for(int i = n - 1; i > 0; i--)
    {
        mini[i] = min(mini[i + 1] , s[i]);
    }
    int i = 0;
    while (i < n or !t.empty())
    {
        if(i < n && (t.empty() or mini[i] < t.top()))
        {
            t.push(s[i++]);
        }
        else
        {
            res.push_back(t.top());
            t.pop();
        }
    }
    cout << res;
}  
/*---------------Start MAIN--------------------*/
int main()
{
    fast_io;
    solved();
    return 0;
}
/*-----------------End MAIN-----------------*/