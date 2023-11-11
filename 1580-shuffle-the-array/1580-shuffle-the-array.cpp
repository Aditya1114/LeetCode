class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
        int s=0;
        int e=1;
        for(int i=0; i<n;i++){
            ans[s]=nums[i];
            s+=2;
        }
        for(int j=n; j<n*2;j++){
            ans[e]=nums[j];
            e+=2;
        }
        return ans;
    }
};