class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int , int>> line;
        int n = tickets.size();
        for(int i = 0 ; i < tickets.size() ; i++)
            line.push({tickets[i] , i});
        
        int time = 0;
        while(!line.empty())
        {
            auto [num , index] = line.front();
            line.pop();
            num--;
            time++;
            if(index == k && num == 0)
                return time;
            if(num > 0)
                line.push({num , index});
        }
        return time;
    }
};