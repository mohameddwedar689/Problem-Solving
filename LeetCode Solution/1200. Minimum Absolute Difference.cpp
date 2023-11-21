class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> v;
        vector<int> vv;
        sort(arr.begin() , arr.end());
        int mini = INT_MAX;
        for(int i = 1; i < arr.size() ; i++)
        {
            if(abs(arr[i] - arr[i - 1]) < mini)
                mini = abs(arr[i] - arr[i - 1]);
        }
        for(int i = 1 ; i < arr.size() ; i++)
        {
            if(abs(arr[i] - arr[i - 1]) <= mini)
            {
                vv.push_back(arr[i - 1]);
                vv.push_back(arr[i]);
                v.push_back(vv);
                vv.clear();
            }
        }
        return v;
    }
};