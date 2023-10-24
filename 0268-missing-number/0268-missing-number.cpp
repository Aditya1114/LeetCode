class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int actualResult=0;
        for(int i=0; i<=nums.size();i++){
            actualResult= actualResult+i;
        }
        for(int i=0;i<nums.size();i++){
            ans=ans+nums[i];
        }
        
        return actualResult-ans;
    }
};
