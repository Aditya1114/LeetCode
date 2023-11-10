class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        unordered_map<int,int> mpp;
        for(auto i : nums){
            count+= mpp[i];
            mpp[i]++;
        }
        return count;
    }
};