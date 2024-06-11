class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      
        unordered_set<int> intSet;

        
        for (int num : nums) {
           
            if (intSet.find(num) != intSet.end())
                return true;

         
            intSet.insert(num);
        }

        return false;
    }
};