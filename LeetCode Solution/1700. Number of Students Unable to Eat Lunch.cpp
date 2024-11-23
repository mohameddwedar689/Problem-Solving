class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> student , sandwiche;
        for(int i = 0 ; i < sandwiches.size() ; i++)
        {
            student.push(students[i]);
            sandwiche.push(sandwiches[i]);
        }

        int flag = 0;
        while(true)
        {
            if(flag == student.size())
                break;
            
            if(student.front() != sandwiche.front())
            {
                flag++;
                student.push(student.front());
                student.pop();
            }
            else
            {
                flag = 0;
                student.pop();
                sandwiche.pop();
            }
        }
        return student.size();
    }
};