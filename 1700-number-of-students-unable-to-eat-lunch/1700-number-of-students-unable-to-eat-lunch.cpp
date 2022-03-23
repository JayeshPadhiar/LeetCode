class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        stack<int> s;
        
        int num_student = students.size();
        
        
        for(auto i: students){
            q.push(i);
        }
        
        for(int i=sandwiches.size()-1; i>=0; i--){
            s.push(sandwiches[i]);
        }
        
        int unable = 0;
        
        while(num_student != 0){
            
            if(q.front() == s.top()){
                q.pop();
                s.pop();
                num_student--;
                unable = 0;
            }
            else{
                
                if(unable == num_student){
                    return num_student;
                }
                
                
                unable++;
                q.push(q.front());
                q.pop();
            }
            
            
        }
        
        return num_student;
    }
};