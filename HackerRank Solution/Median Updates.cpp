/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long q;
    cin >> q;
    multiset<long long> st;
    multiset<long long>::iterator it;
    while(q--)
    {
        char c;
        long long val;
        cin >> c >> val;
        if(c == 'a')
        {
            st.insert(val);
            if(st.size() == 1)
            {
                it = st.begin();
            }
            else if(st.size() & 1 && val < *it)
            {
                //odd version
                it--;
            }
            else if(st.size() % 2 == 0 && val >= *it)
            {
                //even version
                it++;
            }

            if(st.size() & 1)
                cout << *it << endl;
            else
            {
                auto temp = it;
                temp--;

                if((*temp + *it) % 2 == 0)
                    cout << (*temp + *it) / 2 << endl;
                else
                    cout << fixed << setprecision(1) << (double)(*temp + *it) / 2 << endl;
            }
        }
        else
        {
            if(st.empty() || st.find(val) == st.end())
                cout << "Wrong!" << endl;
            else
            {
                if(st.size() & 1 && val <= *it)
                {
                    it++;
                }
                else if(st.size() % 2 == 0 && val > *it)
                {
                    it--;
                }
                else if(st.size() % 2 == 0 && st.find(val) == it)
                {
                    it--;
                }

                st.erase(st.find(val));

                if(st.empty())
                    cout << "Wrong!" << endl;
                else if(st.size() & 1)
                    cout << *it << endl;
                else
                {
                    auto temp = it;
                    temp--;
                    if((*temp + *it) % 2 == 0)
                        cout << (*temp + *it) / 2 << endl;
                    else
                        cout << fixed << setprecision(1) << (double)(*temp + *it) / 2 << endl;
                }
            }
        }
    }
    return 0;
}
