/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b , n , m;
    cin >> b >> n >> m;
    int keyboards[n] , usbs[m];
    for(int i = 0 ; i < n ; i++)
        cin >> keyboards[i];

    for(int i = 0 ; i < m ; i ++)
        cin >> usbs[i];

    int maxi = 0;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(keyboards[i] + usbs[j] <= b)
                maxi = max(maxi , keyboards[i] + usbs[j]);
        }
    }
    if(maxi)
        cout << maxi << endl;
    else
        cout << -1 << endl;
    return 0;
}
