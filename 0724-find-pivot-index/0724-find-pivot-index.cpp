class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int leftSum=0;
      int rightSum=0;
      for(auto element:nums){
          rightSum+=element;
      }
      for(int i=0; i<nums.size();i++){
          rightSum-=nums[i];
          if(leftSum==rightSum){
              return i;
          }
          leftSum+=nums[i];
      }
      return -1;
    }
};