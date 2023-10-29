class Solution {
public:
    vector<int> twoPointerMethod(vector<int> &arr, int k, int x){
        int l=0,h=arr.size()-1;
        while(h-l>=k){
            if(x-arr[l] > arr[h]-x){
                l++;
            }
            else{
                h--;
            }
        }
        vector<int> ans;
        for(int i=l;i<=h;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return twoPointerMethod(arr,k,x);
    }
};