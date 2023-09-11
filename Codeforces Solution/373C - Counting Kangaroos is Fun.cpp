/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
#define Dwedar_On_Da_Code ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    Dwedar_On_Da_Code;
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    sort(a , a + n);
    int i = 0 , j = 1 , ans = 0;
    while(i < (n / 2) && j < n)
    {
        if(a[i] * 2 <= a[j])
            ans++ , i++;
        j++;
    }
    cout << (n - ans) << endl;
    return 0;
}
