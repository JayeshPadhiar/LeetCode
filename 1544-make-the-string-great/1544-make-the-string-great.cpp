class Solution {
public:
    string makeGood(string s) {
        
        stack<char> a;
        stack<char> b;
        
        
        for(auto i: s){
            a.push(i);
        }
        
        
        while(true){
            
            bool removed = false;
            if(!a.empty()){
                while(!a.empty()){
                    b.push(a.top());
                    a.pop();
                    
                    if(!a.empty() && !b.empty() && 
                       (max(a.top(), b.top())-min(a.top(), b.top())) == 32){
                        //cout<<"Popping "<<a.top()<<b.top()<<endl;
                        a.pop();
                        b.pop();
                        removed = true;
                    }
                }
            }else{
                
                while(!b.empty()){
                    a.push(b.top());
                    b.pop();
                    
                    if(!b.empty() && !a.empty() && 
                       (max(a.top(), b.top())-min(a.top(), b.top())) == 32){
                        //cout<<"Popping "<<a.top()<<b.top()<<endl;
                        a.pop();
                        b.pop();
                        removed = true;
                    }
                }
            }
            
            if(!removed)
                break;
        }
        
        string ans = "";
        
        while(!a.empty()){
            ans = ans+a.top();
            a.pop();
            
        }
        reverse(ans.begin(), ans.end()); 
        
        while(!b.empty()){
            ans = ans+b.top();
            b.pop();
        }
        
        
        
        return ans;
        
    }
};