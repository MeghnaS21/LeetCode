class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i]%2==0){
                int j=0;
                while(j<arr.size()){
                    if(arr[j]==arr[i]/2 && j!=i)
                    {
                        return true;
                    }
                    ++j;
                }
            }
        }
        return false;
    }
};