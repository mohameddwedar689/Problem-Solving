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
        int n , d;
        cin >> n >> d;
        int a[n];
        for(int i = 0 ; i < n ; i++)
            cin >> a[i];
        sort(a , a + n);
        if(a[n - 1] <= d || a[0] + a[1] <= d)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
