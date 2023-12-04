class Solution {
public:
    int longestPalindrome(string s) {
        map<char , int> m;
        int n = s.size();
        for(int i = 0 ; i < n ; i++)
            m[s[i]]++;
        int ans = 0;
        bool flag = false;
        for(auto x:m)
        {
            if(x.second % 2 == 0)
            {
                ans += x.second;
            }
            else
            {
                ans += x.second - 1;
                flag = true;
            }
        }
        if(flag)
            ans++;
        return ans;
    }
};