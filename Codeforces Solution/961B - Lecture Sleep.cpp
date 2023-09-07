/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cin >> n >> k;
    vector<int> a(n + 1) , t(n + 1);
    long long sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }

    for(int i = 0 ; i < n ; i++)
    {
        cin >> t[i];
        if(t[i] == 1)
        {
            sum += a[i];
            a[i] = 0;
        }
    }

    for(int i = 1; i < n ; i++)
        a[i] += a[i - 1];

    int maxi = -1;
    for(int i = 0 ; i <=  n - k ; i++)
    {
        if(i == 0)
            maxi = a[i + k - 1];
        else
            maxi = max(maxi , a[i + k - 1] - a[i - 1]);
    }

    cout << maxi + sum << endl;
    return 0;
}
