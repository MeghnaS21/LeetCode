class Solution {
public:
    char findTheDifference(string s, string t) {
        
        s+=t; int c=0;
        for(auto x: s)
        {
            c^=x;
         }
    return c;
        
        
        
        
        
        
        
        
//         char ans;
//         int i = s.size();
//         int j = t.size();
        
//         //edge cases - 1
//         if(i==0)
//         {
//             return t[0];
//         }
        
//         //edge case - 2
//         if(i==(j-1)){
//             return t[t.size()-1];
//         }
        
//         map<int, char> countingCharOccurences;
        
//         int traverseS = 0;
//         int traverseT = 0;
        
//         while(traverseT < t.size()){
//             countingCharOccurences
//         }
    }
};