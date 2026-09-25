class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> f;

        for(int num : nums){
            f[num]++;
        }
        int max_freq= 0, ansElement = -1;

        for(auto p : f){
            if(p.first % 2 > 0 || p.second < max_freq)
            continue;

            if(p.second > max_freq or p.first < ansElement){
              max_freq = p.second;
              ansElement = p.first;
            }
        }
        return ansElement;
    }
};