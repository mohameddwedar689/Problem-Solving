class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == 1)   
                cnt++;
            else
            {
                ans.push_back(cnt);
                cnt = 0;
            }
        }
        ans.push_back(cnt);
        return *max_element(ans.begin() , ans.end());
    }
};