class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int> st1(begin(nums1), end(nums1));
        vector<int> result;
        for(int &num : nums2){
          if(st1.find(num) != st1.end()){
           result.push_back(num);
              st1.erase(num);    
          }        
}
           return result;
    }
};