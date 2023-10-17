class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=1;
        while(i < nums.size() && nums[i]>=nums[i-1])i++;
        return i-1;
    }
};