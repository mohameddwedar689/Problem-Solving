class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n1 = list1.size() , n2 = list2.size();
        map<string , int> mp;
        vector<string> ans;
        int mini = INT_MAX;
        for(int i = 0 ; i < n1 ; i++)
        {
            if(mp.find(list1[i]) != mp.end())
                mp[list1[i]] += i;
            else
                mp[list1[i]] = i;
        }
        for(int i = 0 ; i < n2 ; i++)
        {
            if(mp.find(list2[i]) != mp.end())
            {
                int sum = i + mp[list2[i]];
                if(sum < mini)
                {
                    ans.clear();
                    mini = sum;
                    ans.push_back(list2[i]);
                }
                else if(sum == mini)
                {
                    ans.push_back(list2[i]);
                }
            }
        }

        return ans;
    }
};