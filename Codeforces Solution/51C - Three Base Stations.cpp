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
int n;
bool check(double m , vector<int> p)
{
    double s = p[0] + m;
    int cnt = 1;
    for(int i = 1; i < n ; i++)
    {
        if(p[i] > s + m)
        {
            cnt++;
            s = p[i] + m;
        }
    }
    return (cnt <= 3);
}
int main()
{
    //Dwedar_On_Da_Code();
    cin >> n;
    vector<int> p(n);
    for(int i = 0 ; i < n ; i++) cin >> p[i];
    sort(p.begin() , p.end());
    double l = 0 , r = 1e9 , d;
    while(r - l >= 1e-7)
    {
        double m = (l + (r - l) / 2);
        if(check(m , p))
        {
            r = m;
            d = m;
        }
        else
        {
            l = m;
        }
    }
    cout << fixed << setprecision(6) << r << endl;
    int x = 1;
    double st = p[0] + d;
    cout << st << " ";
    for(int i = 1;  i< n ; i++)
    {
        if(p[i] > st + d)
        {
            st = p[i] + d;
            cout << st << " ";
            x++;
        }
    }
    for(int i = n - (3 - x) ; i < n ; i++)
    {
        cout << 1 << " ";
    }
    cout << endl;
    return 0;
}