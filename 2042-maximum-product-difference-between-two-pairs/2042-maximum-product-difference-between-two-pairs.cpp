class Solution {
public:
   int maxProductDifference(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int maxProductDifference = (nums[n-1] * nums[n-2]) - (nums[0] * nums[1]);
    return maxProductDifference;
}

};