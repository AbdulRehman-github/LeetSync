class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(arr == target)  return true;
          if(arr.size() != target.size()) return false;

          sort(arr.begin(), arr.end());
          sort(target.begin(), target.end());
          return arr == target;

    }
};