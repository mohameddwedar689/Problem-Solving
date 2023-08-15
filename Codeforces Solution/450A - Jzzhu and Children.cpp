/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , m;
    cin >> n >> m;
    vector<int> v(110);
    deque<int> d;
    for(int i = 0 ; i < n; i++)
    {
        cin >> v[i];
        d.push_back(i);
    }

    while(d.size() > 1)
    {
        int index = d.front();
        d.pop_front();

        if(v[index] > m)
        {
            d.push_back(index);
        }
        v[index] -= m;
    }
    cout << d.front() + 1;
    /*
    for(int i = 1 ; i <= n ; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i = 0 ; i < d.size() ; i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;
    */
    return 0;
}
