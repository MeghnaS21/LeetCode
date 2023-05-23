class Solution {
public:
    int lengthOfLastWord(string s) {
       vector<string>words;
        stringstream obj(s);
        string temp;
        while(obj>>temp)
        {
            words.push_back(temp);
        }
        int length = words[(words.size()-1)].size();
        return length;
        
    }
};