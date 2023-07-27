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
	int n , m;
	string str1 , str2;
	map<string,string> mp;
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++)
    {
        cin >> str1 >>str2;
        str2 += ";";
        mp[str2] = str1 ;
    }

    for(int i = 0 ; i < m ; i++)
    {
        cin >> str1 >> str2;
        cout << str1 <<" "<< str2 << " #" << mp[str2] <<endl;
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