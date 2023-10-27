class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=nums[0];
        if(nums.size()==1 && nums[0]==1){
            return 1;
        }
        for(int i=1; i<nums.size();i++){
            result=result ^ nums[i];
        }
        return result;
    }
};