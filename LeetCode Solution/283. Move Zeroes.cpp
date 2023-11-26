class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int cnt = 0;
       for(int i = 0 ; i < nums.size() ; i++)
       {
            if(nums[i] == 0)
                cnt++;
            else if(cnt > 0)
            {
                int temp = nums[i];
                nums[i] = 0;
                nums[i - cnt] = temp;
            }
       }
    }
};