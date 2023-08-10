/*
    Author: Mohamed Dwedar
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // time: O(n) space: O(1)
        reverse(digits.begin() , digits.end());
        int carry = 1 , i = 0;
        while(carry)
        {
            if(i < digits.size())
            {
                if(digits[i] == 9)
                    digits[i] = 0;
                else
                {
                    digits[i] += 1;
                    carry = 0;
                }
            }
            else
            {
                digits.push_back(1);
                carry = 0;
            }
            i++;
        }
        reverse(digits.begin() , digits.end());
        return digits;
    }
};