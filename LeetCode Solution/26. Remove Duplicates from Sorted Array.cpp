class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 1 , right = 1;
        for(int i = right ; i < (int)nums.size() ; i++)
        {
            if(nums[right - 1] == nums[right])
            {
                right++;
            }
            else
            {
                nums[left] = nums[right];
                left++ , right++;
            }
        }
        return left;
    }
};