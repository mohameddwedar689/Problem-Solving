class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int n = gain.size();
       vector<int> pre(n+1);
       pre[0] = gain[0];
       for(int i = 1; i < n ; i++)
       {
           pre[i] = gain[i] + pre[i - 1];
       } 
       return *max_element(pre.begin() , pre.end());
    }
};