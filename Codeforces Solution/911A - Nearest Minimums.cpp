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
    int a[100009];
    cin >> n;
    int mi = 1e9 + 7;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        mi = min( mi , a[i] );
    }
    int ans = 1e9;
    for(int temp = -1 , i = 0 ; i < n ; i++){
        if(a[i] == mi){
            if(temp != -1){
                ans = min(ans , i - temp);
            }
            temp = i;
        }
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