class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int num : nums){
            count[num]++;

            if(count[num] > 1){
                return num;
            }
        }
        return -1 ;
    }
};