class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();

        vector<int> result(n);

        // Total sum of all elements
        long long total = 0;

        for (int x : nums) {
            total += x;
        }

        // Sum of elements on the left
        long long leftSum = 0;

        for (int i = 0; i < n; i++) {

            // Sum of differences with elements on the left
            long long left = (long long)nums[i] * i - leftSum;

            // Remove current element
            total -= nums[i];

            // Sum of differences with elements on the right
            long long right = total - (long long)nums[i] * (n - i - 1);

            result[i] = left + right;

            // Add current element to left side
            leftSum += nums[i];
        }

        return result;
    }
};