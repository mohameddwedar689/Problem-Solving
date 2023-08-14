/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j];
        }
    }
    int x = 0 , i = 0 , j = 0;
    while(i < n && j < n)
    {
        x += a[i][j];
        i++;
        j++;
    }

    int y = 0 , k = 0 , m = n - 1;
    while(k < n && m >= 0)
    {
        y += a[k][m];
        k++;
        m--;
    }
    cout << abs(x - y) << endl;
    return 0;
}
