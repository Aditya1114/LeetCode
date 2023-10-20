class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //    o(n^2)
     int result = 0;
    // for (int i = 0; i < nums.size(); i++) {
    //     for (int j = i + 1; j < nums.size(); j++) {
    //         if (nums[i] == nums[j]) {
    //             result = nums[i];
    //         }
    //     }
    // }
    // return result;
    // }


    //O(n log n)
    // sort(nums.begin(),nums.end());
    // for(int i=0;i<nums.size()-1; i++){
    //     if(nums[i]==nums[i+1])
    //     result=nums[i];
    // }
    // return result;
    // }
    while(nums[0]!=nums[nums[0]]){
        swap(nums[0],nums[nums[0]]);
    }
return nums[0];}
};