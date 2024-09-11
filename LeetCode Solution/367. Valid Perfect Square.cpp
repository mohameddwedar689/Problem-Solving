class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left = 1 , right = num;
        while(left <= right)
        {
            long long mid = (left + right) / 2;
            long long square = mid * mid;
            if(square == num)
                return true;
            else if(square > num)
                right = mid - 1;
            else if(square < num)
                left = mid + 1;
        }
        return false;
    }
};