class Solution {
public:
    string defangIPaddr(string address) {
        
        //Create an empty string stream
        stringstream ans;
        
        for(int i =0;i<address.length();i++){
            if(address[i]=='.')
                ans<<"[.]";   //replace . with [.]
            else
                ans<<address[i];
        }
        
        //Convert the stream/builder to string and return it.
        return ans.str();
        
    }
};