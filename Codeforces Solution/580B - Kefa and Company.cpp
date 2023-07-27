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
    // freopen("input.txt" , "right" , stdin);
    // freopen("output.txt" , "w" , stdout);  
    int n , d;
    cin >> n >> d;
    vector<pair<int , int>> v;
    for(int i = 0; i < n ; i++)
    {
        int x , y;
        cin >> x >> y;
        v.push_back(make_pair(x , y));
    }
    sort(v.begin() , v.end());
    long long arr[100001] , ans = 0;
    for(int i = 0; i < n ; i++)
    {
        arr[i] = v[i].second;
        if(i)   
            arr[i] += arr[i - 1];
    }
    for(int i = 0; i < n; i++)
    {
        int r = lower_bound(v.begin() , v.end() , make_pair(v[i].first + d , -1)) - v.begin() - 1;
        long long now = arr[r];
        if(i)
            now -= arr[i - 1];
        ans = max(ans , now);   
    }
    cout << ans << endl;
}  
/*---------------Start MAIN--------------------*/
int main()
{
    fast_io;
    solved();
    return 0;
}
/*-----------------End MAIN-----------------*/