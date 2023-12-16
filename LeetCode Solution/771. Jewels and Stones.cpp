class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        /*
            time O(n + m)
            space O(n)
        */
        int n = stones.size();
        map<char , int> mp;
        for(int i = 0 ; i < n ; i++)
            mp[stones[i]]++;
        int cnt = 0;
        for(char c:jewels)
        {
            if(mp.find(c) != mp.end())
            {
                cnt += mp[c];
            }
        }
        return cnt;
    }
};