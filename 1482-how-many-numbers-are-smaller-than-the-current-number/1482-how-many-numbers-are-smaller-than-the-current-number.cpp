class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted_nums = nums;
        unordered_map<int, int> smaller_count_map;
        
        // Sort the copied array
        sort(sorted_nums.begin(), sorted_nums.end());
        
        // Create a map where each value points to its count of smaller elements
        int smaller_count = 0;
        for (int i = 0; i < sorted_nums.size(); ++i) {
            if (i == 0 || sorted_nums[i] != sorted_nums[i - 1]) {
                smaller_count_map[sorted_nums[i]] = smaller_count;
            }
            ++smaller_count;
        }
        
        // Use the map to fill the result array
        vector<int> result;
        for (const int& num : nums) {
            result.push_back(smaller_count_map[num]);
        }
        
        return result;
    }
};