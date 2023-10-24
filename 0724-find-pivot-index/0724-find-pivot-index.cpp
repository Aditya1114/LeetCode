class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0;
        int rightSum=0;
        int ans=-1;
        for(int i=0; i<nums.size();i++){
            for(int j=i+1;j<=nums.size()-1;j++){
                rightSum+=nums[j];
            }
            if(leftSum==rightSum){
                return i;
            }
            else if(ans ==0 || ans == nums.size()-1)
            {
                ans = 0;
            }
            leftSum+=nums[i];
            rightSum=0;
        }
        return ans;
    }
};