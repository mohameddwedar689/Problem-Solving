/*
    Author: Mohamed Dwedar
*/
class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1)
            return x;
        
        long long i = 1 , res = 1;
        while(res <= x)
        {
            i++;
            res = i * i;
        }
        return i - 1;
    }
};