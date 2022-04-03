class Solution {
    public String interpret(String command) {
        
        String ans = "";
        for(int i=0; i<command.length();){
            
            if(command.charAt(i)=='G'){
                ans = ans+'G';
                i++;
            }
            else if(command.charAt(i+1)==')'){
                ans = ans+"o";
                i+=2;
            }   
            else if(command.charAt(i+1)=='a'){
                ans = ans+"al";
                i+=4;
            }
        }
        return ans;
    }
}