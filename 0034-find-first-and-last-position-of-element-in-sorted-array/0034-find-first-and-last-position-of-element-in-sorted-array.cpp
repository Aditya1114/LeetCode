class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> ans;
  int start = 0;
  int end = nums.size() - 1;
  int mid = start + (end - start) / 2;
  int firstIndex = -1;
  int lastIndex = -1;
  while (start <= end) {
    if (target == nums[mid]) {
      firstIndex = mid;
      end = mid - 1;

    } else if (target < nums[mid]) {
      end = mid - 1;
    } else if (target > nums[mid]) {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  ans.push_back(firstIndex);

  start = 0;
  end = nums.size() - 1;
  mid = start + (end - start) / 2;

  while (start <= end) {
    if (target == nums[mid]) {
      lastIndex = mid;
      start = mid + 1;

    } else if (target < nums[mid]) {
      end = mid - 1;
    } else if (target > nums[mid]) {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  ans.push_back(lastIndex);

  return ans;
    }
};