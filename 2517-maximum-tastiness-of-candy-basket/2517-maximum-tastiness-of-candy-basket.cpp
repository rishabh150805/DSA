class Solution {
public:
    bool canPick(vector<int>& price, int k, int diff) {
        int count = 1;
        int last = price[0];

        for (int i = 1; i < price.size(); i++) {
            if (price[i] - last >= diff) {
                count++;
                last = price[i];

                if (count >= k)
                    return true;
            }
        }

        return false;
    }

    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());

        int low = 0;
        int high = price.back() - price.front();

        while (low < high) {
            int mid = low + (high - low + 1) / 2;

            if (canPick(price, k, mid))
                low = mid;
            else
                high = mid - 1;
        }

        return low;
    }
};