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
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> ans;
        for(int i = 0 ; i < n ; i++)
            ans.push_back(i * 2 + 1);
        for(int i = 0 ; i < ans.size() ; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
