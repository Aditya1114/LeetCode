class Solution {
public:
    int pivotElement(vector<int> nums){
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            if(s==e){
                return s;
            }
            int mid=s+(e-s)/2;
            if((mid<=e) && nums[mid]>nums[mid+1]){
                return mid;
            }
            if((mid-1>=s) && nums[mid-1]>nums[mid]){
                return mid-1;
            }
            if(nums[s]>nums[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
    }
int binarySearch(vector<int> nums,int start, int end, int target){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(target<nums[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;

}

    int search(vector<int>& nums, int target) {
        int pivot=pivotElement(nums);
        int result=-1;
        if(target>=nums[0] && target<=nums[pivot]){
            result= binarySearch(nums,0,pivot,target);
        }
       else{
        result=binarySearch(nums,pivot+1,nums.size()-1,target);}
        return result;
    }
};