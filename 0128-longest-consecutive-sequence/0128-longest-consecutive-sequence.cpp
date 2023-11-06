class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> map(nums.begin(), nums.end());
        int longest = 0;
        for (auto n : nums) {
            // searching for the start
            // of sequences
            if (map.contains(n - 1)) {
                continue;
            }
            int local_longest = 1;
            while (map.contains(++n)) {
                ++local_longest;
            }
            longest = max(longest, local_longest);
        }
        return longest;
    }
};