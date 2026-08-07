class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long low = 1;
        long long minRank = *min_element(ranks.begin(), ranks.end());
        long long high = minRank * 1LL * cars * cars;
        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            long long repaired = 0;
            for (int r : ranks) {
                repaired += (long long)sqrt((double)mid / r);
                if (repaired >= cars) break;
            }

            if (repaired >= cars) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};