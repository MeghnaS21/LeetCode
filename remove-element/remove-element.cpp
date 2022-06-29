class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        
        int k=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=val){
                arr[k]=arr[i];
                ++k;
            }
        }
        return k;
    }
};