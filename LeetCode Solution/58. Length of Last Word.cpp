/*
    Author: Mohamed Dwedar
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        // time: O(n) , space: O(1)
        long long i = s.size() - 1;
        long long len = 0;
        // skip last spaces
        while(s[i] == ' ')
            i--;
        //count last word
        while(i >= 0 && s[i] != ' ')
            len++ , i--;
        return len;
    }
};