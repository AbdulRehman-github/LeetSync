class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        int n = nums.size();
        
        
        sort(nums.begin(), nums.end());
        
   
        bool bobTurn = true;
        while (!nums.empty()) {
            
            if (bobTurn) {
                int minElement = nums[0];
                nums.erase(nums.begin());
                arr.push_back(minElement);
            } else {
               
                int minElement = nums[0];
                nums.erase(nums.begin());
                arr.push_back(minElement);
            }
            bobTurn = !bobTurn; 
        }
        
       
        for (int i = 1; i < arr.size(); i += 2) {
            swap(arr[i], arr[i - 1]);
        }
        
        return arr;
    }
};
