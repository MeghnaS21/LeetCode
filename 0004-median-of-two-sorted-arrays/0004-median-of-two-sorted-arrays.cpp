class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //create a new array
//         vector<int> v;
        
//         //merge both the arrays
//         for(auto i: nums1){
//             v.push_back(i);
//         }
        
//         for(auto i : nums2){
//             v.push_back(i);
//         }
        
//         //sort the array
//         sort(v.begin(), v.end());
        
//         int n = v.size();
        
//         if(n%2)
//             return v[n/2];
//         else
//             return (v[n/2-1] + v[n/2])/2;
        
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        int lastindex=-1;
             
        // Initialize a new array
           vector<int>v(n1+n2,0);
        
        while(i<n1&&j<n2)
        {
            if(nums1[i]<=nums2[j])
                v[++lastindex]=nums1[i++];
            else
                v[++lastindex]=nums2[j++];
        }
        
        while(i<n1)
            v[++lastindex]=nums1[i++];
        while(j<n2)
            v[++lastindex]=nums2[j++];
        
    // Return the result
        int n=n1+n2;
        return n%2?v[n/2]:(v[n/2]+v[n/2-1])/2.0;
        
        
    }
};