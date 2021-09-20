class Solution {
public:
    string interpret(string command) {
        
        string ans;
        string gans = "G";
        string oans = "o";
        string alans = "al";
        
        int i = 0;
        for(int i =0;i<command.size();i++)
           {
            if(command[i]=='G'){
                ans += command[i];
            }
            
            if(command[i]=='(' && command[i+1]==')' ){
                ans += oans;
                i = i+1;
            }
            if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')'){
                ans += alans;
                i = i+3;
            }
        }
        
        return ans;
        
    }
};