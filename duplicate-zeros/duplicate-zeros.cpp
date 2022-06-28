class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
          int arrlength=arr.size();
          for(int i=arrlength-1;i>=0;i--){
              if(arr[i]==0)
                  arr.insert(arr.begin()+i, 0);
                 
        }
        int modifiedArr=arr.size();
        for(int i=1;i<=modifiedArr-arrlength;i++){
            arr.pop_back();
        }
    }
};