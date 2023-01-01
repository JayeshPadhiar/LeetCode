class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char, string> map;
        unordered_map<string, char> rev;
        
        string word;
        list<string> arr;
        
        for(char c: s){
            if(c != ' '){
                word += c;
            }else{
                arr.push_back(word);
                word = "";
            }
        }

        if(word != ""){
            arr.push_back(word);
        }
        
        if(pattern.length() != arr.size()){
            return false;
        }
        
        for(char c: pattern){ 
            if(map.find(c) == map.end()){
                
                if(rev.find(arr.front()) == rev.end()){
                    map[c] = arr.front();
                    rev[arr.front()] = c;
                }else{
                    return false;
                }
                arr.pop_front();
            }else{
                if(map[c] != arr.front()){
                    return false;
                }
                arr.pop_front();
            }  
        }  
        return true; 
        
    }
};