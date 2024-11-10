class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i = 0 ; i < operations.size() ; i++) 
        {
            if(operations[i] != "C" && operations[i] != "D" && operations[i] != "+")
            {
                string ch = operations[i];
                stringstream strm(ch);
                int num;
                strm >> num;
                st.push(num);
            }
            else if(!st.empty() && operations[i] == "C")
            {
                st.pop();
            }
            else if(!st.empty() && operations[i] == "D")
            {
                int y = st.top();
                y = y * 2;
                st.push(y);
            }
            else if(operations[i] == "+" && st.size() >= 2)
            {
                int y = st.top();
                st.pop();
                int x = st.top();
                st.push(y);
                st.push(x + y);
            }
        }
        int sum = 0;
        while(!st.empty())
        {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};