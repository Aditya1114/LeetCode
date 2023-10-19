class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start=0,pointer=0,end=nums.size()-1;
        while(pointer<=end){
        if(nums[pointer]==0){
            swap(nums[start],nums[pointer]);
            start++;
            pointer++;
        }
        else if(nums[pointer]==1){
            pointer++;
        }
        else{
            swap(nums[pointer],nums[end]);
            end--;
        }}
    }
};