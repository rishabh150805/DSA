
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;

        for (int i = 0; i < n; i++) {
            res.push_back(nums[i]);

            while (i + 1 < n && nums[i] == nums[i + 1]) {
                i++;
            }
        }

        for (int i = 0; i < res.size(); i++) {
            nums[i] = res[i];
        }

        return res.size();
    }
};
