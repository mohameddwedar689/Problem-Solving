class Solution {
public:
    string toHex(int num) {
        if(num == 0)
            return to_string(0);
        string digits = "0123456789abcdef";
        string res = "";
        unsigned int n = num;
        while(n > 0)
        {
            int q , r;
            r = n % 16;
            res += digits[r];
            n /= 16;
        }
        reverse(res.begin() , res.end());
        return res;
    }
};