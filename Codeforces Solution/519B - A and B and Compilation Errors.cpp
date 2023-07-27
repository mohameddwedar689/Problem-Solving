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
    long long s1 = 0 , s2 = 0 , s3 = 0;
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        int x;
        cin >> x;
        s1 += x;
    }
    for(int i = 0 ; i < n - 1 ; i++)
    {
        int x;
        cin >> x;
        s2 += x;
    }
    for (int i = 0; i < n - 2; i++)
    {
        int x;
        cin >> x;
        s3 += x;
    }
    cout << s1 - s2 << endl << s2 - s3 << endl;
    
}  
/*---------------Start MAIN--------------------*/
int main()
{
    fast_io;
    solved();
    return 0;
}
/*-----------------End MAIN-----------------*/