/*
    Author: Mohamed Dwedar
    "Truth can only be found in one place: The Code"
*/
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
using namespace std;
/*----------------Solve func()----------------*/
long long getSum(long long n)
{
    long long sum = 0 , m;
    while (n > 0)
    {
        m = n % 10;
        sum += m;
        n = n / 10;
    }
    return sum;
}
void solved()
{
    // freopen("input.txt" , "r" , stdin);
    // freopen("output.txt" , "w" , stdout);
    long long n , s , cnt = 0 , left , right , mid;
    cin >> n >> s;
    left = 1 , right = n;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if(mid - getSum(mid) >= s)
        {
            cnt = n - mid + 1;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << cnt << endl;
}  
/*---------------Start MAIN--------------------*/
int main()
{
    fast_io;
    solved();
    return 0;
}
/*-----------------End MAIN-----------------*/