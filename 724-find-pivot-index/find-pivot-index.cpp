class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for (int i = 0; i < nums.size(); i++) {
            total += nums[i];
        }
        int sumleft = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sumright = total - sumleft - nums[i];
            if (sumleft == sumright) {
                return i;
            }
            sumleft += nums[i];
        }
        return -1;
    }
};