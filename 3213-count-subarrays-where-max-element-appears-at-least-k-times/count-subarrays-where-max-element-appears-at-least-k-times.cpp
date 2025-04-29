class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());  // Get the maximum element
        long long res = 0;
        int countMax = 0;  // Count of current max in the window
        int left = 0;

        for (int right = 0; right < n; ++right) {
            if (nums[right] == maxi) countMax++;

            // Shrink the window from left if countMax >= k
            while (countMax >= k) {
                res += (n - right);  // All subarrays from left to end are valid
                if (nums[left] == maxi) countMax--;
                left++;
            }
        }
        return res;
    }
};
