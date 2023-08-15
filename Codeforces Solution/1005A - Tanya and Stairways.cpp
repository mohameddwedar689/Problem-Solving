/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int ptr = -1;
    for(int i = 0 ; i < n ; i++)
    {
        int x; cin >> x;
        if(x == 1 && ptr != -1)
            v.push_back(ptr);
        ptr = x;
    }
    v.push_back(ptr);
    cout << v.size() << endl;
    for(int i = 0 ; i < (int)v.size() ; i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}
