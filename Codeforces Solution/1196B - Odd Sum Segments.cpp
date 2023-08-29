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
        int n , k , odds = 0;
        cin >> n >> k;
        int a[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            if(a[i] % 2 != 0)
                odds++;
        }

        if(k > odds)
        {
            cout << "NO" << endl;
        }
        else if(odds % 2 == k % 2)
        {
            cout << "YES" << endl;
            for(int i = 0 ; i < n; i++)
            {
                if(k == 1)
                {
                    cout << n << endl;
                    break;
                }

                if(a[i] % 2)
                {
                    cout << i + 1 << " ";
                    k--;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
