/*
    Author: Mohamed Dwedar

    1. Create counter varaible 
    2. Loop through the startTime
        a. Create a condition if queryTime is in between value of startTime and endTime
            I. Increment the counter
    3. Return the value of the counter
*/
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int cnt = 0;
        for(int i = 0 ; i < startTime.size() ; i++)
        {
            if(queryTime >= startTime[i] and queryTime <= endTime[i])
                cnt++;
        }
        return cnt;
    }
};