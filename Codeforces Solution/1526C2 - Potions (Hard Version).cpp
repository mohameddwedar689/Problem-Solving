#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<int> v(n);
    priority_queue<int, vector<int> , greater<int>> p;
    long long health = 0 , ans = 0;
    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0 ; i < n; i++)
    {
        if(v[i] < 0)
        {
            if(health + v[i] >= 0)
            {
                p.push(v[i]);
                ans++;
                health += v[i];
            }
            else
            {
                if(!p.empty() && v[i] > p.top())
                {
                    health -= p.top();
                    health += v[i];
                    p.pop();
                    p.push(v[i]);
                }
            }

        }
        else
        {
            ans++;
            health += v[i];
        }
    }

    cout << ans << endl;
    return 0;
}
