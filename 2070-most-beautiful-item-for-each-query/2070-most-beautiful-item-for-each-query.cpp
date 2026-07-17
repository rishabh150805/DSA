class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(), items.end());

        // Prefix maximum beauty
        for (int i = 1; i < items.size(); i++) {
            items[i][1] = max(items[i][1], items[i - 1][1]);
        }

        vector<int> ans;

        for (int q : queries) {
            int left = 0, right = items.size() - 1;
            int idx = -1;

            while (left <= right) {
                int mid = left + (right - left) / 2;

                if (items[mid][0] <= q) {
                    idx = mid;
                    left = mid + 1;      // search further right
                } else {
                    right = mid - 1;
                }
            }

            if (idx == -1)
                ans.push_back(0);
            else
                ans.push_back(items[idx][1]);
        }

        return ans;
    }
};