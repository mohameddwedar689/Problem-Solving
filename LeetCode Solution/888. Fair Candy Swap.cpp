class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        map<int , int> mp;
        vector<int> ans;
        int sum1 = 0 , sum2 = 0;
        for(int i = 0 ; i < aliceSizes.size() ; i++)
            sum1 += aliceSizes[i];
        for(int i = 0 ; i < bobSizes.size() ; i++)
        {
            sum2 += bobSizes[i];
            mp[bobSizes[i]] = i;
        }
        int total = (sum1 - sum2) / 2;
        for(int i = 0 ; i < aliceSizes.size() ; i++)
        {
            if(mp.count(aliceSizes[i] - total))
            {
                ans.push_back(aliceSizes[i]);
                ans.push_back(aliceSizes[i] - total);
                break;
            }
        }
        return ans;
    }
};