/*
    Author: Mohamed Dwedar
    1. define a variable that hold the max wealth for the richest customer
    2. loop through the accounts 
    3. define a variable the hold the total amount of ith customer
    4. loop through the values of ith customer
    5. add these values to total amount variable 
    6. check if the total amount bigger than leatest max weath
    7. return the max wealth
*/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(int i = 0 ; i < accounts.size() ; i++)
        {
            int  sum = 0;
            for(int j = 0 ; j < accounts[i].size() ; j++)
            {
                sum += accounts[i][j];
            }
            if(sum > ans)
            {
                ans = sum;
            }
        }
        return ans;
    }
};