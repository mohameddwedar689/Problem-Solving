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
    // freopen("input.txt" , "right" , stdin);
    // freopen("output.txt" , "w" , stdout);  	
	int tc;
    cin >> tc;
    while(tc--)
    {
        string a;
        cin >> a;
        long long n = a.size();
        long long arr[200] = {0}, i, j;
        for(i = 0; i < n; i++) {
            arr[a[i]]++;
        }
        for(i = 0; i < n; i++) {
            arr[a[i]]--;
            if(arr[a[i]] == 0){
                for(j = i; j < n; j++) cout<<a[j];
                break;
            }
        }
        cout<<endl;
    }
}  
/*---------------Start MAIN--------------------*/
int main()
{
    fast_io;
    solved();
    return 0;
}
/*-----------------End MAIN-----------------*/