class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ln = nums.size();
        if(ln <= 2){
            return nums[0];
        }
        if(nums[0] != nums[1]){     
            return nums[0];
        }
        if(nums[ln-1] != nums[ln-2]){
            return nums[ln-1];
        }
        int s=1;
        int e=nums.size()-2 ;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid-1] != nums[mid] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }

            if(mid%2==0){
                if(nums[mid]==nums[mid+1]){
                    s=mid+1;
                }
                else if(nums[mid]==nums[mid-1]){
                    e=mid-1;
                }
            }
            else{
                if(nums[mid]==nums[mid+1]){
                    e=mid-1;
                }
                else if(nums[mid]==nums[mid-1]){
                    s=mid+1;
                }
            }
        }
        return e;
    }
};