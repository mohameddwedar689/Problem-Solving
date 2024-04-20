class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        int capital = 0 , small = 0;
        bool flag = false;
        if(isupper(word[0]))
            flag = true;
        for(int i = 0 ; i < n ; i++)
        {
            if(isupper(word[i]))
                capital++;
            else
                small++;
        }
        if(flag == true && small == n - 1 && capital == 1)
            return true;
        if(small == n || capital == n)
            return true;
        return false;
    }
};