class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int , int> mp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(mp.find(nums[i]) != mp.end())
            {
                mp[nums[i]]++;
            }
            else
            {
                mp.insert({nums[i] , 1});
            }
        }
        int maxi = INT_MIN;
        int ans = 0;
        for(auto x:mp)
        {
            if(x.second > maxi)
            {
                maxi = x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};