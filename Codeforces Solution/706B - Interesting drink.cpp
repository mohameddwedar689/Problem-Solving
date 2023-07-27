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
    // freopen("input.txt" , "r" , stdin);
    // freopen("output.txt" , "w" , stdout);
    int n;
    cin >> n;
    int prices[n];
    for(int i = 0; i < n; i++)
        cin >> prices[i];
    
    int q;
    cin >> q;
    int cash[q];
    for(int i = 0; i < q; i++)
        cin >> cash[i];

    sort(prices , prices + n);

    for(int i = 0; i < q ; i++)
        cout << upper_bound(prices , prices + n , cash[i]) - prices << endl;
    
}  
/*---------------Start MAIN--------------------*/
int main()
{
    fast_io;
    solved();
    return 0;
}
/*-----------------End MAIN-----------------*/