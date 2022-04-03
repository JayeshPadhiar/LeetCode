class Solution {
    public String interpret(String command) {
        
        String parse = "";
        String ans = "";
        
        for(int i=0; i<command.length(); i++){
            parse = parse+command.charAt(i);
            if(parse.equals("G")){
                ans = ans+parse;
                parse = "";
            }
            else if(parse.equals("()")){
                ans = ans+"o";
                parse = "";
            }   
            else if(parse.equals("(al)")){
                ans = ans+"al";
                parse = "";
            }
        }
        return ans;
    }
}