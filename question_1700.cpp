class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> sand;
        queue<int> stu;

        for(int i = sandwiches.size() - 1; i >= 0; i--)
            sand.push(sandwiches[i]);

        for(int i = 0; i < students.size(); i++)
            stu.push(students[i]);
        
        int count = 0;
        
        while (!stu.empty()) {
            if (stu.front() == sand.top()) {
                count = 0;
                stu.pop();
                sand.pop();
            }
            else {
                count++;
                int temp = stu.front();
                stu.pop();
                stu.push(temp);
            }
            if (count == stu.size()) 
                return count;
        }    
        return 0;
    }
};
