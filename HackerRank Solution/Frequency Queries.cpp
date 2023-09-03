/*
    Author: Mohamed Dwedar
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    map<int , int> nums , freq;
    while(tc--)
    {
        int op , val;
        cin >> op >> val;
        if(op == 1)
        {
            freq[nums[val]]--;
            nums[val]++;
            freq[nums[val]]++;
        }
        else if(op == 2)
        {
            if(nums[val] > 0)
            {
                freq[nums[val]]--;
                nums[val]--;
                freq[nums[val]]++;
            }
        }
        else
        {
            cout << (freq[val] > 0) << endl;
        }
    }
    return 0;
}
