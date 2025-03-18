class Solution {
    public:
        int findClosestNumber(vector<int>& nums) {
            long int minimum = nums[0];
            for(int i = 0 ; i < (int)nums.size() ; i++) {
                if(abs(nums[i]) < abs(minimum) || (abs(nums[i]) == abs(minimum) && nums[i] > minimum)) {
                    minimum = nums[i];
                }
            }
            return minimum;
        }
    };