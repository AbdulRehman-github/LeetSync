class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++){
            int j = i + 1;
            while(j < n && nums[i] + nums[j] < target ){
                count++;
                j++;
            }
        }
           return count;
    }
};