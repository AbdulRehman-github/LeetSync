class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       int n = nums.size();
        vector<bool> seen(n, false);
        int duplicate;
        int sum = 0;
        
        for(int i : nums){
          if(seen[i])
              duplicate = i;
            else{
                seen[i] = true;
                sum += i;
            }
        }
        int missing = n * (n + 1) / 2 - sum;
        return {duplicate, missing};
    }
};