class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans ; //create an empty string
        int i=0;  //pointer one to traverse first string
        int j =0; //pointer two to traverse the second string
        while(i<word1.size() || j<word2.size()) //loop until one pointer has reached the end
        {
            if(i<word1.size())  //check if pointer is less than the size or not
                ans += word1[i++]; //append it to the new string
            if(j<word2.size()) //check another pointer the same way
                ans += word2[j++]; //append again
            
        }
        return ans; //return ans
    }
};