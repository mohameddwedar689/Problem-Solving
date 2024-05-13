class Solution {
public:
    bool isPowerOfTwo(int n) {
        int temp = n;
        if(temp > 0)
        {
            while(temp % 2 == 0)
                temp /= 2;
            if(temp == 1)
                return true;
        }
        return false;
    }
};