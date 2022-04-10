class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        int sum = 0;
        stack<int> stk;
        
        
        for(auto i: ops){
            char c = i[0];
            switch(c){
                case 'C':
                    {
                        stk.pop();
                    }
                    break;
                
                case 'D':
                    {                        
                        stk.push(stk.top()*2);
                    }
                    break;
                
                case '+':
                    {
                        
                        int a = stk.top();
                        stk.pop();
                        int b = stk.top();
                        stk.pop();
                        
                        stk.push(b);
                        stk.push(a);
                        stk.push(a+b);
                    }
                    break;
                    
                default:
                    {
                        int num = 0;
                        
                        if(c == '-')
                        {
                            for(int x=1; x<i.size(); x++){
                                int number = int(i[x]) - 48;
                                num = (10*num)+number;
                                cout<<num<<endl;
                            }
                            
                            num = -num;
                            
                        }
                        else
                        {
                            for(int x=0; x<i.size(); x++){
                                int number = int(i[x]) - 48;
                                num = (10*num)+number;
                                cout<<num<<endl;
                            }
                        }
                            
                        stk.push(num);
                    }
                    break;
                    
            }
            
        }
        while(!stk.empty())
        {
            sum += stk.top();
            stk.pop();
        }
        
        return sum;
    }
};