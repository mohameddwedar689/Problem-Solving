/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
void Dwedar_On_Da_Code()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};
int main()
{
    //Dwedar_On_Da_Code();
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll ans = 0;
        for(int i = 0 ; i < 10 ; i++)
        {
            for(int j = 0 ; j < 10 ; j++)
            {
                char c;
                cin >> c;
                if(c == 'X')
                    ans += score[i][j];
            }
        }

        cout << ans << endl;
    }
    return 0;
}
