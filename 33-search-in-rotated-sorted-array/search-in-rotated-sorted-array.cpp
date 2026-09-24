class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==tar){
                return mid;
            }
            if(nums[right]<= nums[mid]){
                if(nums[left]<=tar && tar <= nums[mid]){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            else{
                if(nums[mid]<= tar && tar <= nums[right]){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
        }
        return -1;
    }
};