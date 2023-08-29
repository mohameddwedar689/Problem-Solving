/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++)
            cin >> a[i];

        int mini = INT_MAX;
        sort(a , a + n);
        for(int i = n - 1 ; i > 0 ; i--)
        {
            mini = min(mini , a[i] - a[i - 1]);
        }
        cout << mini << endl;
    }
    return 0;
}
