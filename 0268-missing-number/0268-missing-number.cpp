class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int sumPrev = (n*(n+1))/2; 
       int sumArr = 0;
       for(int i = 0; i < n; i++){
        sumArr+= nums[i];
       }
       return sumPrev - sumArr;
    }
};