class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {

        // Sort each row
        for (auto &row : nums) {
            sort(row.begin(), row.end());
        }

        int rows = nums.size();
        int cols = nums[0].size();

        int ans = 0;

        // Traverse column by column
        for (int j = 0; j < cols; j++) {

            int mx = 0;

            for (int i = 0; i < rows; i++) {
                mx = max(mx, nums[i][j]);
            }

            ans += mx;
        }

        return ans;
    }
};