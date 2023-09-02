/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> freq(n + 1);
    int cnt = 0;
    for(int i = 1 ; i < n ; i++)
    {
        if(s[i] == s[i - 1])
            cnt++;
        freq[i] = cnt;
    }

    int m;
    cin >> m;
    while(m--)
    {
        int l , r;
        cin >> l >> r;
        cout << freq[r - 1] - freq[l - 1] << endl;
    }
    return 0;
}
