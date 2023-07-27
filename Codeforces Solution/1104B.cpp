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
    string str;
    cin >> str;
    stack<char> s;
    int flag = 0;
    for(int i = 0; i < str.size() ; i++)
    {
        if(s.empty())
        {
            s.push(str[i]);
        }
        else
        {
            int pointer = s.top();
            if(pointer == str[i])
            {
                s.pop();
                //XOR
                flag ^= 1;
            }
            else
            {
                s.push(str[i]);
            }
        }
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}  
/*---------------Start MAIN--------------------*/
int main()
{
    fast_io;
    solved();
    return 0;
}
/*-----------------End MAIN-----------------*/