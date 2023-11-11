/*
    Author: Mohamed Dwedar

    1. define unordered_map to store frequency of each number
    2. loop through the element to increments the value of the map
    3. define variable that hold the max of lucky number
    4. loop through kay-value pairs in the map
    5. check the kay == value && value > max
    6. return the value of the max or return -1
*/
class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int , int> m;
        for(int i = 0 ; i < (int)arr.size() ; i++)
            m[arr[i]]++;

        int maxi = 0;
        for(auto x:m)
        {
            if(x.first == x.second && x.second > maxi)
                maxi = x.second;
        }

        if(maxi)
            return maxi;
        return -1;
    }
};