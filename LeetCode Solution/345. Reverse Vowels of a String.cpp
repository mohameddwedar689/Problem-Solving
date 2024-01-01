class Solution {
public:
    bool check(char ch){
        ch = tolower(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    string reverseVowels(string s) {
        int n = s.size();
        int l = 0 , r = n - 1;
        while(l < r)
        {
            if(check(s[l]) && check(s[r]))
            {
                swap(s[l] , s[r]);
                l++;
                r--;
            }
            else if(check(s[l]) == 0)
            {
                l++;
            }
            else if(check(s[r]) == 0)
            {
                r--;
            }
        }
        return s;
    }
};