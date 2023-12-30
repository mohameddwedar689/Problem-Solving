class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        for(int i = 0 ; i < n ; i++)
        {
            if(ispunct(s[i]))
            {
                s.erase(i-- , 1);
                n = s.size();
            }
        }
        s.erase(remove(s.begin() , s.end() , ' ') , s.end());
        transform(s.begin() , s.end() , s.begin() , :: tolower);
        int l = 0 , r = s.size() - 1;
        while(l < r)
        {
            if(s[l] >= 'a' || s[l] <= 'z')
            {
                if(s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    return false;
                }
            }
            else if(s[l] <= 'a' && s[l] >= 'z')
            {
                l++;
            }
            else if(s[r] <= 'a' && s[r] >= 'z')
            {
                r++;
            }
        }
        return true;
    }
};