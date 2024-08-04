class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int minDiff = INT_MAX;

        for(int i = 1; i < arr.size(); ++i){
          int  diff = arr[i] - arr[i - 1];
          if(diff < minDiff){
            minDiff = diff;
          }
        }
           vector<vector<int>> result;
            for(int i = 1; i < arr.size(); ++i){
                int  diff = arr[i] - arr[i - 1];
                if(diff == minDiff){
                    result.push_back({arr[i - 1], arr[i]});
                }
            }
            return result;
    }
};