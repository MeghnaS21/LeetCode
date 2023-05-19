class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closest_sum = nums[0] + nums[1] + nums[2]; // initialize closest sum
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;
            while (left < right) { // two-pointer approach
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == target) { // sum equals target, return immediately
                    return sum;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
                if (abs(sum - target) < abs(closest_sum - target)) { // update closest sum
                    closest_sum = sum;
                }
            }
        }
        return closest_sum;
    }
};