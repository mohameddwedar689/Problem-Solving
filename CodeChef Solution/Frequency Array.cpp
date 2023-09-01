/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n , x , mx = 0;
        cin >> n;
        unordered_map<int , int> freq;
        while(n--)
        {
            cin >> x;
            mx = max(mx , ++freq[x]);
        }
        if(mx == 1)
            cout << "prekrasnyy" << endl;
        else
            cout << "ne krasivo" << endl;
    }
    return 0;
}
