class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long sum = 0;
        for(int i = 0; i < nums.size() ; i++)
            sum += nums[i];

        long long leftsum = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(leftsum == (sum - leftsum - nums[i]))
                return i;
            leftsum += nums[i];
        }
        return -1;
    }
};