class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0 , ans = 0;
        for(int i = 0 ; i < (int)nums.size() ; i++)
        {
            sum += nums[i],
            ans = min(ans , sum);
        }
        ans = -ans + 1;
        return ans;
    }
};