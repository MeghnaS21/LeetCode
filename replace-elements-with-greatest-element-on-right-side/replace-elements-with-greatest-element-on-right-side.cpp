class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        // arr[n-1]=-1;
        int max = INT_MIN;
        int temp=arr[n-1];
        for(int j=(n-2);j>=0;j--){
            if(temp>max)
            {
                max=temp;
                temp=arr[j];
                arr[j]=max;
            }
            else{
                temp=arr[j];
                arr[j]=max; 
            }
            
        }
       
        
        arr[n-1]=-1;
        return arr;
    }
};